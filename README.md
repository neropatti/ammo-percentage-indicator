# Ammo Percentage Indicator

This is useful for making sure you are efficiently using your ammo,
ideally reaching that 50% mark on everything before taking a resupply.

[Live mod](https://mod.io/g/drg/m/ammo-percentage-indicator)

## Settings

You can use either ~~[toucan](https://mod.io/g/drg/m/toucan) or~~ [modhub](https://mod.io/g/drg/m/mod-hub) to edit your settings, which are:

- % color indication
  - none
  - static
  - blinking
  - blinking dynamic
    - Speed changes based on how low the % is and "Switch % color at"
  - gradient
- Grenade /
  - disabled
  - static
  - coloured
- Display % for
  - current weapon
  - total ammo
- Display location
  - disabled
  - integrated
  - floating
  - integrated^2 WIP
    - Replaces normal ammo counts with %
  - integrated high WIP
    - Moves the % above the normal count
- Normal % (color)
- Switch % color at
- Low % (color)
- Sentry ammo color indication
  - based on "normal % (color)", "low % (color)" and "switch % color at"

---------------------------------

## Known issues

- Resetting the colour to the default value does not get rid of the reset button on the first click
  - I love ue4 :)

## Notes for modders

If you want to contribute, or make your own mod based on this, you need to use the asset reconstruction pack; [drive download](https://drive.google.com/file/d/1HL-z5I62FpY6l9Qt2QGnR8ZpHkHyfESQ/view?usp=sharing), [modding server](https://discord.gg/gUw32ayWGt), [channel message](https://discord.com/channels/676880716142739467/883791204930703360/998263940809232507)

If you encounter any other issues, have ideas for features, or want to contribute, get in touch with me on the [DRG modding discord](https://discord.gg/gUw32ayWGt): neropatti#5892

## todo list

### Creaper

- Sleep
- An animation showing how much you've WASTED on a resuply.
  - Like a red shadow coming up behind the % showing how much
- Add % into gun's display

### Nero

- Test downloading fresh copy of project and does it work etc
  - List all the external resources needed if they are missing
- Make new video showcasing settings
- Learn UE4 more
- Stylize the UI to be nice
- Refactor all of Creapers work
