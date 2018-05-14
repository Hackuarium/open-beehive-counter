// testing serial monitoring commands.

void processSpecificCommand(char* data, char* paramValue, Print* output) {

  switch (data[0]) {
    case 'c':
      printCounter(output);
      break;
    case 'l':
      processLoggerCommand(data[1], paramValue, output);
      break;
    case 'm':
      printMax(output);
      break;
    case 't':
      printTotal(output);
      break;
  }
}

void printSpecificHelp(Print * output) {
  output->println(F("(c)ounter"));
  output->println(F("(l)og"));
  output->println(F("(m)ax value"));
}
