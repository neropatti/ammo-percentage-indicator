# Ammo Percentage Indicator

This is useful for making sure you are efficiently using your ammo,
ideally reaching that 50% mark on everything before taking a resupply.

[Live mod](https://mod.io/g/drg/m/ammo-percentage-indicator)

## Settings

You can use [modhub](https://mod.io/g/drg/m/mod-hub) to edit your settings, which are:

- % color indication
  - none
  - static
  - blinking
  - blinking dynamic
    - Speed changes based on how low the % is and "Switch 
- Grenade /
  - disabled
  - enabled
  - coloured
- Display % for
  - disabled
  - current weapon
  - total ammo
  - total ammo weighted
% color at
  - gradient
- In hud
  - disabled
  - integrated
  - integrated^2
  - integrated high
- floating (f2 to enable mouse and to drag around)
  - disabled
  - current weapon
  - total ammo
  - total ammo weighted
- Normal % (color)
- Color %
- Low % (color)
- Sentry ammo color indication
- Ring
  - disabled
  - current weapon
  - total ammo
  - total ammo weighted

If you cant read, then you can hover over the settings to be able to read even less.

## Notes for modders

If you want to contribute, or make your own mod based on this, you need to use the [asset reconstruction pack](https://drive.google.com/file/d/1HL-z5I62FpY6l9Qt2QGnR8ZpHkHyfESQ/view?usp=sharing) (can also be found on this [server](https://discord.gg/gUw32ayWGt) > [message](https://discord.com/channels/676880716142739467/883791204930703360/998263940809232507)).

If you get "unknown structure" errors, just validate the mod folder.

If you find any issues or have ideas for features, [leave it on the github page](https://github.com/neropatti/ammo-percentage-indicator/issues/new) with the correct label.

If you want to contribute, get in touch with me on the [DRG modding discord](https://discord.gg/gUw32ayWGt): neropatti#5892

((key_2_A039ADE049C5E4D2A916209E2016573F="precColoring",name_8_A5A490D94C753E640485AA8F6C56CBEA="% color indication",description_19_E1162D614DEDEACFBA5366AF993B7CDE="How do you want to be notified that you need a resuplly?\\nNone - none, wow\\nStatic - Just switch between the normal color and low\\nBlinking - Blink between normal and low color\\nBlinking dynamic - Speed changes based on how low the % is and \"Switch % color at\"\\nGradient - Slowly change from normal color to the low % color",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="none",options_12_FA9DC4EB419853645EEFF58972E8061D=("none","static","blinking","blinking dynamic","gradient"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(key_2_A039ADE049C5E4D2A916209E2016573F="grenadeSlash",name_8_A5A490D94C753E640485AA8F6C56CBEA="Grenade Slash",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Show max amount of grenades next to the current amount of grenades\\nDisabled - another word for none\\nEnabled - its there.\\nColoured - Its there.. but COLOURED! (based on the color settings and \"color %\")",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="disabled",options_12_FA9DC4EB419853645EEFF58972E8061D=("disabled","enabled","coloured"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(key_2_A039ADE049C5E4D2A916209E2016573F="total",name_8_A5A490D94C753E640485AA8F6C56CBEA="Display % for",description_19_E1162D614DEDEACFBA5366AF993B7CDE="What should the % indicate?\\nCurrent weapon - shows the % for the current weapons clip ammo / max possible ammo\\nTotal ammo - shows ammo for all weapons divided by total ammo for all ammo\\nWeighted total ammo  - weight how much a weapons ammo is worth in the %. Change the Total Ammo Weight setting",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="current weapon",options_12_FA9DC4EB419853645EEFF58972E8061D=("current weapon","total ammo","weighted total ammo"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(key_2_A039ADE049C5E4D2A916209E2016573F="integration",name_8_A5A490D94C753E640485AA8F6C56CBEA="In hud",description_19_E1162D614DEDEACFBA5366AF993B7CDE="How to show the % in the helmet hud.\\nDisabled - ...\\nIntegrated - its integrated in the hud\\nIntegrated^2 - Too much integration, replace the normal ammo counts with %\\nIntegrated high - same as integrated but higher/above the normal count",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="integrated",options_12_FA9DC4EB419853645EEFF58972E8061D=("disabled","integrated"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(key_2_A039ADE049C5E4D2A916209E2016573F="floating",name_8_A5A490D94C753E640485AA8F6C56CBEA="Floating",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Adds a draggable floating %. Press F2 to enable mouse without mudhub.\\nDisabled - Its disabled :)\\nCurrent weapon - shows the current weapon\'s ammo %\\nTotal ammo - shows total ammo\\nWeighted total ammo - shows the weighted ammo",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="disabled",options_12_FA9DC4EB419853645EEFF58972E8061D=("disabled","current weapon","total ammo","weighted total ammo"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(key_2_A039ADE049C5E4D2A916209E2016573F="color",name_8_A5A490D94C753E640485AA8F6C56CBEA="Normal %",description_19_E1162D614DEDEACFBA5366AF993B7CDE="The \"you are good, for now\" color",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="(R=0.500000,G=0.500000,B=0.300000,A=1.000000)",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator4),(key_2_A039ADE049C5E4D2A916209E2016573F="colorPrec",name_8_A5A490D94C753E640485AA8F6C56CBEA="Color %",description_19_E1162D614DEDEACFBA5366AF993B7CDE="The % to switch the color at, for static coloring atleast.",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="50",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator2),(key_2_A039ADE049C5E4D2A916209E2016573F="colorlow",name_8_A5A490D94C753E640485AA8F6C56CBEA="Low %",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Color that would indicate to you that you should think about resuplling",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="(R=1.000000,G=0.100000,B=0.000000,A=1.000000)",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator4),(key_2_A039ADE049C5E4D2A916209E2016573F="sentrycolor",name_8_A5A490D94C753E640485AA8F6C56CBEA="Sentry ammo color indication",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Color sentry ammo based on the % colors and \"switch % color at\"",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="false"),(key_2_A039ADE049C5E4D2A916209E2016573F="ring",name_8_A5A490D94C753E640485AA8F6C56CBEA="Ring",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Adds a new ring element that can be dragged around.\\nDisabled - Its disabled :)\\nCurrent weapon - shows the current weapon\'s ammo %\\nTotal ammo - shows total ammo\\nWeighted total ammo - shows the weighted ammo",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="disabled",options_12_FA9DC4EB419853645EEFF58972E8061D=("disabled","current weapon","total ammo","weighted total ammo"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(key_2_A039ADE049C5E4D2A916209E2016573F="totalAmmoWeight",name_8_A5A490D94C753E640485AA8F6C56CBEA="Total Ammo Weight",description_19_E1162D614DEDEACFBA5366AF993B7CDE="used for  \"Display % for\" > \"weighted total ammo\"",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="30.0,25.0,10.0,15.0,20.0",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator6))

((name_8_A5A490D94C753E640485AA8F6C56CBEA="% color indication",description_19_E1162D614DEDEACFBA5366AF993B7CDE="How do you want to be notified that you need a resuplly?\\nNone - none, wow\\nStatic - Just switch between the normal color and low\\nBlinking - Blink between normal and low color\\nBlinking dynamic - Speed changes based on how low the % is and \"Switch % color at\"\\nGradient - Slowly change from normal color to the low % color",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="none",options_12_FA9DC4EB419853645EEFF58972E8061D=("none","static","blinking","blinking dynamic","gradient"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(name_8_A5A490D94C753E640485AA8F6C56CBEA="Display % for",description_19_E1162D614DEDEACFBA5366AF993B7CDE="What should this % indicate?\\nCurrent weapon - shows the % for the current weapons clip ammo / max possible ammo\\nTotal ammo - shows ammo for all weapons divided by total ammo for all ammo\\nWeighted total ammo  - weight how much a weapons ammo is worth in the %. Change the Total Ammo Weight setting",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="current weapon",options_12_FA9DC4EB419853645EEFF58972E8061D=("current weapon","total ammo","weighted total ammo"),type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator1),(name_8_A5A490D94C753E640485AA8F6C56CBEA="Normal %",description_19_E1162D614DEDEACFBA5366AF993B7CDE="The \"you are good, for now\" color",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="(R=0.500000,G=0.500000,B=0.300000,A=1.000000)",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator4),(name_8_A5A490D94C753E640485AA8F6C56CBEA="Color %",description_19_E1162D614DEDEACFBA5366AF993B7CDE="The % to switch the color at, for static coloring atleast.",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="50",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator2),(name_8_A5A490D94C753E640485AA8F6C56CBEA="Low %",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Color that would indicate to you that you should think about resuplling",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="(R=1.000000,G=0.100000,B=0.000000,A=1.000000)",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator4),(name_8_A5A490D94C753E640485AA8F6C56CBEA="Ring",description_19_E1162D614DEDEACFBA5366AF993B7CDE="Adds a new ring element that can be dragged around.\\nDisabled - Its disabled :)\\nCurrent weapon - shows the current weapon\'s ammo %\\nTotal ammo - shows total ammo\\nWeighted total ammo - shows the weighted ammo",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="false"),(name_8_A5A490D94C753E640485AA8F6C56CBEA="Total Ammo Weight",description_19_E1162D614DEDEACFBA5366AF993B7CDE="used for  \"Display % for\" > \"weighted total ammo\"",value_5_1ED9DF424DC874703AEF1192CAFBFA9C="30.0,25.0,10.0,15.0,20.0",type_16_1079A73843B485D019A3DEA7292E29FF=NewEnumerator6))