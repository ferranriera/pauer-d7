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
    'left1' => t('Left1'),
        'left2' => t('Left2'),
    'right' => t('Right'),
  ),
);
