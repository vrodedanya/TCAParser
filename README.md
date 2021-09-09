# TCAParser
## Dependencies
- [asn1c](https://github.com/vlm/asn1c/)
## Building
1. mkdir build
2. cd build
3. cmake ..
4. make -j
## Using
You need file with row TCAP. If you have hex dump of it you can use hexLoader:
```
./hexLoader
```
After getting dump of TCAP you can execute TCAParser:
```
./TCAParser <fileName>
```
If TCAP is correct you will get xml in output<br>
TCAParser doesn't parse some tags now (for example 'parameter')
