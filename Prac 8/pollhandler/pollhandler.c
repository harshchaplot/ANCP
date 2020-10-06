#include "contiki.h"
#include <stdio.h>
PROCESS(example_pollhandler, "Pollhandler example");
AUTOSTART_PROCESSES(&example_pollhandler);
static void
exithandler(void)
{
  printf("Process exited\n");
}

static void
pollhandler(void)
{
  printf("Process polled\n");
}

PROCESS_THREAD(example_pollhandler, ev, data)
{
  
  PROCESS_POLLHANDLER(pollhandler());
  PROCESS_EXITHANDLER(exithandler());

  PROCESS_BEGIN();

  while(1) {
    PROCESS_WAIT_EVENT();
  }
  
  PROCESS_END();
}
