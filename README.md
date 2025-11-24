# sdkviewer
Constantly updated cs2 offsets (faster than a2x)
### Goals
- ~~5 stars: release binary of the dumper~~ Under the Releases tab!
- 10 stars: auto offset searcher (it gives updated offsets based on the ones you gave it)
- 15 stars: auto schema and sdk dumpers. 
- 20 stars: release source of everything

### explanation
> the dumped zips are  `generated_latest` `schema_latest` and `type_dump`

- the `generated_latest` is a full sdk dump with all cs2 classes. it has memory reading and writing for internal and external and is fully auto updating but does get regenerated every update.

- the `schema_latest` is very similar to the `generated_latest` but it uses hardcoded offsets and a reading macro which can be changed (by defualt internal only). It excludes
all type classes.

- `type_dump` is a full dump of ONLY the classes that are used as game types (ending with `_t`). they are used as proper types and have alignment so you can read the types internally and externally.

### visual sdk viewer is available at https://moonlightrblx.github.io/sdkviewer
