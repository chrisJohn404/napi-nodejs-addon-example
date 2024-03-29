# NAPI NodeJS Addon Example

***Beginners guide to writing NodeJS Addons using C++ and N-API (node-addon-api)***


Node.js provides JavaScript developers the ability to write C++ code and then trigger it to be executed in JavaScript for performance and flexibility purposes.  Node-API is actively being developed, experimental through v9, however it has been maintained consistently since v10.  The general code structure comes from following the [nodejs/node-addon-examples](https://github.com/nodejs/node-addon-examples) referenced from [nodejs/node-addon-api](https://github.com/nodejs/node-addon-api).


```mermaid
graph TD;
    Index.js-->cppsrc/main.cpp;
    cppsrc/main.cpp-->cppsrc/Samples/functionexample.h/.cpp;
    cppsrc/main.cpp-->cppsrc/Samples/classexample.h/.cpp;
    cppsrc/Samples/classexample.h/.cpp-->cppsrc/Samples/actualclass.h/.cpp;
```


To run the example:

- `git clone https://github.com/chrisJohn404/napi-nodejs-addon-example`
- `cd napi-nodejs-addon-example`
- `npm install`
- `npm run build`
- `npm start`



//This is mostly not needed. But just in case.  Then:

```
$ node index.js
addon {
  hello: [Function (anonymous)],
  add: [Function (anonymous)],
  ClassExample: [Function: ClassExample]
}
hello  Hello World
add  15
Initial value :  4.3
After adding 3.3 :  7.6
Testing class initial value for derived instance
7.6
```

Hope this helps someone 🎉🌮

Troubleshooting Note:

5/23/2022, if build fails due to python and node-gyp dependencies.

```bash
$ npm install --python=/usr/local/bin/python2
OR
$ npm config set python /usr/local/bin/python2

# POSSIBLY:
Linux:

export PYTHON=python2.7
# Windows:
set PYTHON=python2.7
````

Ref: [Python3 Build Configs](https://stackoverflow.com/questions/20454199/how-to-use-a-different-version-of-python-during-npm-install)


