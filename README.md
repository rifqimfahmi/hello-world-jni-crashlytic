huh?
--
Copy unstripped native lib from the module 
```
find nativelib/build -path "*cmake/debug*.so" -exec bash -c 'cp -r $(dirname {}) unstripped-native-lib' \;
```
Verify if the unstripped and stripped object shared the same Build ID
```
readelf -n {path_to_so_file}
```