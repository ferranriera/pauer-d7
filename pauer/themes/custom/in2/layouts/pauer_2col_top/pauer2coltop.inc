<?php

// Plugin definition
$plugin = array(
  'title' => t('Pauer 2col with Top'),
  'category' => t('Pauer'),
  'icon' => 'pauer2coltop.png',
  'theme' => 'pauer_2coltop',
  'css' => '2coltop.css',
  'regions' => array(
     'top' => t('Top'),
        'left' => t('Left'),
    'right' => t('Right'),
  ),
);
