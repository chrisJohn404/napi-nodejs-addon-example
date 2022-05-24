# NAPI NodeJS Addon Example

***Beginners guide to writing NodeJS Addons using C++ and N-API (node-addon-api)***


To run the example:

- `git clone https://github.com/chrisJohn404/napi-nodejs-addon-example`
- `cd napi-nodejs-addon-example`
- `npm install`
- `npm run build` //This is mostly not needed. But just in case

```bash
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

NOTE:
5/23/2022, build fails due to python and node-gyp dependencies.

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
