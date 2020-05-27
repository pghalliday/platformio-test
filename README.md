# platformio-test

Investigating platformio

## notes

Install with:

```
brew install platformio
```

Install shell completion and restart shell

```
platformio system completion install
pio system completion install
```

To list available boards matching a pattern, eg: esp8266

```
pio boards esp8266
```

Init a project in the current directory for specified boards, eg: d1_mini and d1_mini_pro

```
pio project init -b d1_mini -b d1_mini_pro
```

This can be rerun to add additional boards to `platformio.ini`

See `platformio.ini` for configuration examples

To build

```
pio run
```

To build and upload

```
pio run -t upload
```

To start the serial monitor

```
pio device monitor
```
