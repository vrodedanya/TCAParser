# TCAParser
## Dependencies
- [asn1c](https://github.com/vlm/asn1c/)
## Building
1. mkdir build
2. cd build
3. cmake ..
4. make -j
## Using
### By file
You need file with raw TCAP. If you have hex sequence of it you can use hexLoader:
```
./hexLoader
```
After getting dump of TCAP you can execute TCAParser:
```
./TCAParser -f <fileName>
```
If TCAP is correct you will get xml in output.<br>
TCAParser doesn't parse some tags in current version (for example 'parameter')
### By sequence
```
./TCAParser
```
