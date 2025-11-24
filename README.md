# sdkviewer
The best SDK viewer repository with insanely fast updates.
### why this is better than other repos
I am completely honest about updates and if something is broken. I am also very active in the community meaning I can update fast. This repo isn't community run meaning no worries of any suspicous code being run on your pc. Everything here right now is based off of my old projects or is completely new.

### Goals
- ~~5 stars: release binary of the dumper~~ Under the Releases tab!
- 10 stars: auto offset searcher (it gives updated offsets based on the ones you gave it)
- 15 stars: auto schema and sdk dumpers.
- 25 stars: release source of everything (including my very own internal cheat)

### explanation
> the dumped zips are  `generated_latest` `schema_latest` and `type_dump`

- the `generated_latest` is a full sdk dump with all cs2 classes. it has memory reading and writing for internal and external and is fully auto updating but does get regenerated every update.

- the `schema_latest` is very similar to the `generated_latest` but it uses hardcoded offsets and a reading macro which can be changed (by defualt internal only). It excludes
all type classes.

- `type_dump` is a full dump of ONLY the classes that are used as game types (ending with `_t`). they are used as proper types and have alignment so you can read the types internally and externally.

### visual sdk viewer is available at https://moonlightrblx.github.io/sdkviewer
