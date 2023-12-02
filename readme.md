## Compile:

```
qmk compile -kb ntz_split_1 -km default 
```


## Flash

Press ESC while plugging in & a new drive will show up. 

Copy the `.build/*.uf2` file to the RPI.

## The Layout

```
            ┌──┐                            ┌──┐
        ┌──┐│3 │┌──┐┌──┐            ┌──┐┌──┐│8 │┌──┐
┌──┐┌──┐│2 │└──┘│4 ││5 │            │6 ││7 │└──┘│9 │┌──┐┌──┐
│ES││1 │└──┘┌──┐└──┘└──┘            └──┘└──┘┌──┐└──┘│0 ││= │
└──┘└──┘┌──┐│E │┌──┐┌──┐            ┌──┐┌──┐│I │┌──┐└──┘└──┘
┌──┐┌──┐│W │└──┘│R ││T │            │Y ││U │└──┘│O │┌──┐┌──┐
│~ ││Q │└──┘┌──┐└──┘└──┘            └──┘└──┘┌──┐└──┘│P ││- │
└──┘└──┘┌──┐│D │┌──┐┌──┐            ┌──┐┌──┐│K │┌──┐└──┘└──┘
┌──┐┌──┐│S │└──┘│F ││G │            │H ││J │└──┘│L │┌──┐┌──┐
│SH││A │└──┘┌──┐└──┘└──┘            └──┘└──┘┌──┐└──┘│; ││' │
└──┘└──┘┌──┐│C │┌──┐┌──┐            ┌──┐┌──┐│, │┌──┐└──┘└──┘
┌──┐┌──┐│X │└──┘│V ││B │            │N ││M │└──┘│. │┌──┐┌──┐
│L1││Z │└──┘    └──┘└──┘ ┌──┐   ┌──┐└──┘└──┘    └──┘│/ ││R1│
└──┘└──┘      ┌──┐┌──┐   │L5│   │R5│  ┌──┐┌──┐      └──┘└──┘
              │L2││L3│   └──┘   └──┘  │R3││R2│
              └──┘└──┘ ┌──┐       ┌──┐└──┘└──┘
                       │L4│       │R4│
                       └──┘       └──┘
```

### Stuff

- [Keycodes](https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_basic.md)
- [Home Row Mods](https://precondition.github.io/home-row-mods)
