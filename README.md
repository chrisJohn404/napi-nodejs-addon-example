# NAPI NodeJS Addon Example

***Beginners guide to writing NodeJS Addons using C++ and N-API (node-addon-api)***


To run the example:

- `git clone https://github.com/master-atul/blog-addons-example`
- `npm install`
- `npm run build` //This is mostly not needed. But just in case
- `node index.js`


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

[ref](https://stackoverflow.com/questions/20454199/how-to-use-a-different-version-of-python-during-npm-install)
