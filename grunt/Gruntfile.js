module.exports = function(grunt) {
  require('jit-grunt')(grunt);

  grunt.initConfig({
    less: {
      development: {
        options: {
          compress: true,
          yuicompress: true,
          optimization: 2
        },
        files: {
          "../pauer/themes/custom/in2/css/style.css": "../pauer/themes/custom/in2/less/style.less" // destination file and source file
        }
      }
    },
    watch: {
      styles: {
        files: ['../pauer/themes/custom/in2/less/**/*.less'], // which files to watch
        tasks: ['less'],
        options: {
          nospawn: true
        }
      }
    }
  });

  grunt.registerTask('default', ['less', 'watch']);
};
