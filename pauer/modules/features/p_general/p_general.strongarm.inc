<?php
/**
 * @file
 * p_general.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function p_general_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_508_compliant';
  $strongarm->value = 0;
  $export['addthis_508_compliant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_addressbook_enabled';
  $strongarm->value = 0;
  $export['addthis_addressbook_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_settings';
  $strongarm->value = array(
    'share_services' => 'facebook,twitter,google_plusone_share,linkedin,compact',
    'buttons_size' => 'addthis_32x32_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
  );
  $export['addthis_block_widget_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_type';
  $strongarm->value = 'addthis_basic_toolbox';
  $export['addthis_block_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_clickback_tracking_enabled';
  $strongarm->value = 0;
  $export['addthis_clickback_tracking_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_click_to_open_compact_menu_enabled';
  $strongarm->value = 0;
  $export['addthis_click_to_open_compact_menu_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_co_brand';
  $strongarm->value = '';
  $export['addthis_co_brand'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_enabled_services';
  $strongarm->value = array(
    'facebook' => 'facebook',
    '100zakladok' => 0,
    '2tag' => 0,
    '2linkme' => 0,
    'a97abi' => 0,
    'addressbar' => 0,
    'adfty' => 0,
    'adifni' => 0,
    'advqr' => 0,
    'amazonwishlist' => 0,
    'amenme' => 0,
    'aim' => 0,
    'aolmail' => 0,
    'apsense' => 0,
    'arto' => 0,
    'azadegi' => 0,
    'baang' => 0,
    'baidu' => 0,
    'balltribe' => 0,
    'beat100' => 0,
    'biggerpockets' => 0,
    'bitly' => 0,
    'bizsugar' => 0,
    'bland' => 0,
    'blinklist' => 0,
    'blogger' => 0,
    'bloggy' => 0,
    'blogkeen' => 0,
    'blogmarks' => 0,
    'blurpalicious' => 0,
    'bobrdobr' => 0,
    'bonzobox' => 0,
    'socialbookmarkingnet' => 0,
    'bookmarkycz' => 0,
    'bookmerkende' => 0,
    'box' => 0,
    'brainify' => 0,
    'bryderi' => 0,
    'buddymarks' => 0,
    'buffer' => 0,
    'buzzzy' => 0,
    'camyoo' => 0,
    'care2' => 0,
    'foodlve' => 0,
    'chiq' => 0,
    'cirip' => 0,
    'citeulike' => 0,
    'classicalplace' => 0,
    'cleanprint' => 0,
    'cleansave' => 0,
    'cndig' => 0,
    'colivia' => 0,
    'technerd' => 0,
    'cosmiq' => 0,
    'cssbased' => 0,
    'curateus' => 0,
    'delicious' => 0,
    'digaculturanet' => 0,
    'digg' => 0,
    'diggita' => 0,
    'digo' => 0,
    'diigo' => 0,
    'domelhor' => 0,
    'dotnetshoutout' => 0,
    'douban' => 0,
    'draugiem' => 0,
    'dropjack' => 0,
    'dudu' => 0,
    'dzone' => 0,
    'efactor' => 0,
    'ekudos' => 0,
    'elefantapl' => 0,
    'email' => 0,
    'mailto' => 0,
    'embarkons' => 0,
    'evernote' => 0,
    'extraplay' => 0,
    'ezyspot' => 0,
    'stylishhome' => 0,
    'fabulously40' => 0,
    'facebook_like' => 0,
    'informazione' => 0,
    'thefancy' => 0,
    'fark' => 0,
    'farkinda' => 0,
    'fashiolista' => 0,
    'favable' => 0,
    'faves' => 0,
    'favlogde' => 0,
    'favoritende' => 0,
    'favorites' => 0,
    'favoritus' => 0,
    'financialjuice' => 0,
    'flaker' => 0,
    'flipboard' => 0,
    'folkd' => 0,
    'formspring' => 0,
    'foursquare' => 0,
    'thefreedictionary' => 0,
    'fresqui' => 0,
    'friendfeed' => 0,
    'funp' => 0,
    'fwisp' => 0,
    'gamekicker' => 0,
    'gg' => 0,
    'giftery' => 0,
    'gigbasket' => 0,
    'givealink' => 0,
    'gmail' => 0,
    'govn' => 0,
    'goodnoows' => 0,
    'google' => 0,
    'google_plusone' => 0,
    'googleplus' => 0,
    'googletranslate' => 0,
    'google_plusone_share' => 0,
    'greaterdebater' => 0,
    'hackernews' => 0,
    'hatena' => 0,
    'gluvsnap' => 0,
    'hedgehogs' => 0,
    'historious' => 0,
    'hootsuite' => 0,
    'hotklix' => 0,
    'hotmail' => 0,
    'w3validator' => 0,
    'identica' => 0,
    'ihavegot' => 0,
    'indexor' => 0,
    'instapaper' => 0,
    'iorbix' => 0,
    'irepeater' => 0,
    'isociety' => 0,
    'iwiw' => 0,
    'jamespot' => 0,
    'jappy' => 0,
    'jolly' => 0,
    'jumptags' => 0,
    'kaboodle' => 0,
    'kaevur' => 0,
    'kaixin' => 0,
    'ketnooi' => 0,
    'kindleit' => 0,
    'kledy' => 0,
    'kommenting' => 0,
    'latafaneracat' => 0,
    'librerio' => 0,
    'lidar' => 0,
    'linkedin' => 0,
    'linksgutter' => 0,
    'linkshares' => 0,
    'linkuj' => 0,
    'livejournal' => 0,
    'lockerblogger' => 0,
    'logger24' => 0,
    'mymailru' => 0,
    'margarin' => 0,
    'markme' => 0,
    'mashant' => 0,
    'mashbord' => 0,
    'me2day' => 0,
    'meinvz' => 0,
    'mekusharim' => 0,
    'memonic' => 0,
    'memori' => 0,
    'mendeley' => 0,
    'meneame' => 0,
    'live' => 0,
    'misterwong' => 0,
    'misterwong_de' => 0,
    'mixi' => 0,
    'moemesto' => 0,
    'moikrug' => 0,
    'mrcnetworkit' => 0,
    'myspace' => 0,
    'myvidster' => 0,
    'n4g' => 0,
    'naszaklasa' => 0,
    'netlog' => 0,
    'netvibes' => 0,
    'netvouz' => 0,
    'newsmeback' => 0,
    'newstrust' => 0,
    'newsvine' => 0,
    'nujij' => 0,
    'odnoklassniki_ru' => 0,
    'oknotizie' => 0,
    'openthedoor' => 0,
    'oyyla' => 0,
    'packg' => 0,
    'pafnetde' => 0,
    'pdfonline' => 0,
    'pdfmyurl' => 0,
    'phonefavs' => 0,
    'pinterest' => 0,
    'pinterest_share' => 0,
    'planypus' => 0,
    'plaxo' => 0,
    'plurk' => 0,
    'pocket' => 0,
    'posteezy' => 0,
    'print' => 0,
    'printfriendly' => 0,
    'pusha' => 0,
    'qrfin' => 0,
    'qrsrc' => 0,
    'quantcast' => 0,
    'qzone' => 0,
    'reddit' => 0,
    'rediff' => 0,
    'redkum' => 0,
    'researchgate' => 0,
    'safelinking' => 0,
    'scoopat' => 0,
    'scoopit' => 0,
    'sekoman' => 0,
    'select2gether' => 0,
    'shaveh' => 0,
    'shetoldme' => 0,
    'sinaweibo' => 0,
    'skyrock' => 0,
    'smiru' => 0,
    'sodahead' => 0,
    'sonico' => 0,
    'spinsnap' => 0,
    'yiid' => 0,
    'springpad' => 0,
    'startaid' => 0,
    'startlap' => 0,
    'storyfollower' => 0,
    'studivz' => 0,
    'stuffpit' => 0,
    'stumbleupon' => 0,
    'stumpedia' => 0,
    'sulia' => 0,
    'sunlize' => 0,
    'supbro' => 0,
    'surfingbird' => 0,
    'svejo' => 0,
    'symbaloo' => 0,
    'taaza' => 0,
    'tagza' => 0,
    'tapiture' => 0,
    'taringa' => 0,
    'textme' => 0,
    'thewebblend' => 0,
    'thinkfinity' => 0,
    'thisnext' => 0,
    'thrillon' => 0,
    'throwpile' => 0,
    'toly' => 0,
    'topsitelernet' => 0,
    'transferr' => 0,
    'tuenti' => 0,
    'tulinq' => 0,
    'tumblr' => 0,
    'tvinx' => 0,
    'twitter' => 0,
    'twitthis' => 0,
    'typepad' => 0,
    'upnews' => 0,
    'urlaubswerkde' => 0,
    'viadeo' => 0,
    'virb' => 0,
    'visitezmonsite' => 0,
    'vk' => 0,
    'vkrugudruzei' => 0,
    'voxopolis' => 0,
    'vybralisme' => 0,
    'wanelo' => 0,
    'internetarchive' => 0,
    'sharer' => 0,
    'webnews' => 0,
    'webshare' => 0,
    'werkenntwen' => 0,
    'whatsapp' => 0,
    'domaintoolswhois' => 0,
    'windows' => 0,
    'wirefan' => 0,
    'wishmindr' => 0,
    'wordpress' => 0,
    'wowbored' => 0,
    'raiseyourvoice' => 0,
    'wykop' => 0,
    'xanga' => 0,
    'xing' => 0,
    'yahoobkm' => 0,
    'yahoomail' => 0,
    'yammer' => 0,
    'yardbarker' => 0,
    'yigg' => 0,
    'yookos' => 0,
    'yoolink' => 0,
    'yorumcuyum' => 0,
    'youmob' => 0,
    'yuuby' => 0,
    'zakladoknet' => 0,
    'ziczac' => 0,
    'zingme' => 0,
  );
  $export['addthis_enabled_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_excluded_services';
  $strongarm->value = array(
    '100zakladok' => 0,
    '2tag' => 0,
    '2linkme' => 0,
    'a97abi' => 0,
    'addressbar' => 0,
    'adfty' => 0,
    'adifni' => 0,
    'advqr' => 0,
    'amazonwishlist' => 0,
    'amenme' => 0,
    'aim' => 0,
    'aolmail' => 0,
    'apsense' => 0,
    'arto' => 0,
    'azadegi' => 0,
    'baang' => 0,
    'baidu' => 0,
    'balltribe' => 0,
    'beat100' => 0,
    'biggerpockets' => 0,
    'bitly' => 0,
    'bizsugar' => 0,
    'bland' => 0,
    'blinklist' => 0,
    'blogger' => 0,
    'bloggy' => 0,
    'blogkeen' => 0,
    'blogmarks' => 0,
    'blurpalicious' => 0,
    'bobrdobr' => 0,
    'bonzobox' => 0,
    'socialbookmarkingnet' => 0,
    'bookmarkycz' => 0,
    'bookmerkende' => 0,
    'box' => 0,
    'brainify' => 0,
    'bryderi' => 0,
    'buddymarks' => 0,
    'buffer' => 0,
    'buzzzy' => 0,
    'camyoo' => 0,
    'care2' => 0,
    'foodlve' => 0,
    'chiq' => 0,
    'cirip' => 0,
    'citeulike' => 0,
    'classicalplace' => 0,
    'cleanprint' => 0,
    'cleansave' => 0,
    'cndig' => 0,
    'colivia' => 0,
    'technerd' => 0,
    'cosmiq' => 0,
    'cssbased' => 0,
    'curateus' => 0,
    'delicious' => 0,
    'digaculturanet' => 0,
    'digg' => 0,
    'diggita' => 0,
    'digo' => 0,
    'diigo' => 0,
    'domelhor' => 0,
    'dotnetshoutout' => 0,
    'douban' => 0,
    'draugiem' => 0,
    'dropjack' => 0,
    'dudu' => 0,
    'dzone' => 0,
    'efactor' => 0,
    'ekudos' => 0,
    'elefantapl' => 0,
    'email' => 0,
    'mailto' => 0,
    'embarkons' => 0,
    'evernote' => 0,
    'extraplay' => 0,
    'ezyspot' => 0,
    'stylishhome' => 0,
    'fabulously40' => 0,
    'facebook' => 0,
    'facebook_like' => 0,
    'informazione' => 0,
    'thefancy' => 0,
    'fark' => 0,
    'farkinda' => 0,
    'fashiolista' => 0,
    'favable' => 0,
    'faves' => 0,
    'favlogde' => 0,
    'favoritende' => 0,
    'favorites' => 0,
    'favoritus' => 0,
    'financialjuice' => 0,
    'flaker' => 0,
    'flipboard' => 0,
    'folkd' => 0,
    'formspring' => 0,
    'foursquare' => 0,
    'thefreedictionary' => 0,
    'fresqui' => 0,
    'friendfeed' => 0,
    'funp' => 0,
    'fwisp' => 0,
    'gamekicker' => 0,
    'gg' => 0,
    'giftery' => 0,
    'gigbasket' => 0,
    'givealink' => 0,
    'gmail' => 0,
    'govn' => 0,
    'goodnoows' => 0,
    'google' => 0,
    'google_plusone' => 0,
    'googleplus' => 0,
    'googletranslate' => 0,
    'google_plusone_share' => 0,
    'greaterdebater' => 0,
    'hackernews' => 0,
    'hatena' => 0,
    'gluvsnap' => 0,
    'hedgehogs' => 0,
    'historious' => 0,
    'hootsuite' => 0,
    'hotklix' => 0,
    'hotmail' => 0,
    'w3validator' => 0,
    'identica' => 0,
    'ihavegot' => 0,
    'indexor' => 0,
    'instapaper' => 0,
    'iorbix' => 0,
    'irepeater' => 0,
    'isociety' => 0,
    'iwiw' => 0,
    'jamespot' => 0,
    'jappy' => 0,
    'jolly' => 0,
    'jumptags' => 0,
    'kaboodle' => 0,
    'kaevur' => 0,
    'kaixin' => 0,
    'ketnooi' => 0,
    'kindleit' => 0,
    'kledy' => 0,
    'kommenting' => 0,
    'latafaneracat' => 0,
    'librerio' => 0,
    'lidar' => 0,
    'linkedin' => 0,
    'linksgutter' => 0,
    'linkshares' => 0,
    'linkuj' => 0,
    'livejournal' => 0,
    'lockerblogger' => 0,
    'logger24' => 0,
    'mymailru' => 0,
    'margarin' => 0,
    'markme' => 0,
    'mashant' => 0,
    'mashbord' => 0,
    'me2day' => 0,
    'meinvz' => 0,
    'mekusharim' => 0,
    'memonic' => 0,
    'memori' => 0,
    'mendeley' => 0,
    'meneame' => 0,
    'live' => 0,
    'misterwong' => 0,
    'misterwong_de' => 0,
    'mixi' => 0,
    'moemesto' => 0,
    'moikrug' => 0,
    'mrcnetworkit' => 0,
    'myspace' => 0,
    'myvidster' => 0,
    'n4g' => 0,
    'naszaklasa' => 0,
    'netlog' => 0,
    'netvibes' => 0,
    'netvouz' => 0,
    'newsmeback' => 0,
    'newstrust' => 0,
    'newsvine' => 0,
    'nujij' => 0,
    'odnoklassniki_ru' => 0,
    'oknotizie' => 0,
    'openthedoor' => 0,
    'oyyla' => 0,
    'packg' => 0,
    'pafnetde' => 0,
    'pdfonline' => 0,
    'pdfmyurl' => 0,
    'phonefavs' => 0,
    'pinterest' => 0,
    'pinterest_share' => 0,
    'planypus' => 0,
    'plaxo' => 0,
    'plurk' => 0,
    'pocket' => 0,
    'posteezy' => 0,
    'print' => 0,
    'printfriendly' => 0,
    'pusha' => 0,
    'qrfin' => 0,
    'qrsrc' => 0,
    'quantcast' => 0,
    'qzone' => 0,
    'reddit' => 0,
    'rediff' => 0,
    'redkum' => 0,
    'researchgate' => 0,
    'safelinking' => 0,
    'scoopat' => 0,
    'scoopit' => 0,
    'sekoman' => 0,
    'select2gether' => 0,
    'shaveh' => 0,
    'shetoldme' => 0,
    'sinaweibo' => 0,
    'skyrock' => 0,
    'smiru' => 0,
    'sodahead' => 0,
    'sonico' => 0,
    'spinsnap' => 0,
    'yiid' => 0,
    'springpad' => 0,
    'startaid' => 0,
    'startlap' => 0,
    'storyfollower' => 0,
    'studivz' => 0,
    'stuffpit' => 0,
    'stumbleupon' => 0,
    'stumpedia' => 0,
    'sulia' => 0,
    'sunlize' => 0,
    'supbro' => 0,
    'surfingbird' => 0,
    'svejo' => 0,
    'symbaloo' => 0,
    'taaza' => 0,
    'tagza' => 0,
    'tapiture' => 0,
    'taringa' => 0,
    'textme' => 0,
    'thewebblend' => 0,
    'thinkfinity' => 0,
    'thisnext' => 0,
    'thrillon' => 0,
    'throwpile' => 0,
    'toly' => 0,
    'topsitelernet' => 0,
    'transferr' => 0,
    'tuenti' => 0,
    'tulinq' => 0,
    'tumblr' => 0,
    'tvinx' => 0,
    'twitter' => 0,
    'twitthis' => 0,
    'typepad' => 0,
    'upnews' => 0,
    'urlaubswerkde' => 0,
    'viadeo' => 0,
    'virb' => 0,
    'visitezmonsite' => 0,
    'vk' => 0,
    'vkrugudruzei' => 0,
    'voxopolis' => 0,
    'vybralisme' => 0,
    'wanelo' => 0,
    'internetarchive' => 0,
    'sharer' => 0,
    'webnews' => 0,
    'webshare' => 0,
    'werkenntwen' => 0,
    'whatsapp' => 0,
    'domaintoolswhois' => 0,
    'windows' => 0,
    'wirefan' => 0,
    'wishmindr' => 0,
    'wordpress' => 0,
    'wowbored' => 0,
    'raiseyourvoice' => 0,
    'wykop' => 0,
    'xanga' => 0,
    'xing' => 0,
    'yahoobkm' => 0,
    'yahoomail' => 0,
    'yammer' => 0,
    'yardbarker' => 0,
    'yigg' => 0,
    'yookos' => 0,
    'yoolink' => 0,
    'yorumcuyum' => 0,
    'youmob' => 0,
    'yuuby' => 0,
    'zakladoknet' => 0,
    'ziczac' => 0,
    'zingme' => 0,
  );
  $export['addthis_excluded_services'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_facebook_like_count_support_enabled';
  $strongarm->value = 1;
  $export['addthis_facebook_like_count_support_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_google_analytics_social_tracking_enabled';
  $strongarm->value = FALSE;
  $export['addthis_google_analytics_social_tracking_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_google_analytics_tracking_enabled';
  $strongarm->value = FALSE;
  $export['addthis_google_analytics_tracking_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_open_windows_enabled';
  $strongarm->value = 0;
  $export['addthis_open_windows_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_profile_id';
  $strongarm->value = '';
  $export['addthis_profile_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_standard_css_enabled';
  $strongarm->value = 1;
  $export['addthis_standard_css_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_twitter_template';
  $strongarm->value = '{{title}} {{url}} via @AddThis';
  $export['addthis_twitter_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_twitter_via';
  $strongarm->value = 'AddThis';
  $export['addthis_twitter_via'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_delay';
  $strongarm->value = '0';
  $export['addthis_ui_delay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_header_background_color';
  $strongarm->value = '';
  $export['addthis_ui_header_background_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_ui_header_color';
  $strongarm->value = '';
  $export['addthis_ui_header_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Madrid';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'd F Y';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_term_node_listings_free_tags';
  $strongarm->value = '404';
  $export['disable_term_node_listings_free_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_term_node_listings_theme_tags';
  $strongarm->value = '404';
  $export['disable_term_node_listings_theme_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'node' => 'node',
    'bean' => 'bean',
    'taxonomy_term' => 0,
    'comment' => 0,
    'file' => 0,
    'user' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__news';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__projects';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__system_pages';
  $strongarm->value = array(
    'default_language' => 'und',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__system_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_shared_labels';
  $strongarm->value = 1;
  $export['entity_translation_shared_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_workflow_enabled';
  $strongarm->value = 0;
  $export['entity_translation_workflow_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_en';
  $strongarm->value = array(
    'popup_info' => array(
      'value' => '<h2>We use cookies on this site to enhance your user experience</h2><p>By clicking any link on this page you are giving your consent for us to set cookies.</p>',
      'format' => 'plain_text',
    ),
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'plain_text',
    ),
  );
  $export['eu_cookie_compliance_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert';
  $strongarm->value = 0;
  $export['extlink_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert_text';
  $strongarm->value = 'This link will take you to an external web site.';
  $export['extlink_alert_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_class';
  $strongarm->value = 'ext';
  $export['extlink_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_exclude';
  $strongarm->value = '';
  $export['extlink_css_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_explicit';
  $strongarm->value = '';
  $export['extlink_css_explicit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_exclude';
  $strongarm->value = '(addthis\\.com)|(linkedin\\.com)';
  $export['extlink_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_img_class';
  $strongarm->value = 0;
  $export['extlink_img_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_include';
  $strongarm->value = '';
  $export['extlink_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_mailto_class';
  $strongarm->value = 0;
  $export['extlink_mailto_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_subdomains';
  $strongarm->value = 1;
  $export['extlink_subdomains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_target';
  $strongarm->value = '_blank';
  $export['extlink_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__general_structure';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'variant_1' => array(
        'custom_settings' => TRUE,
      ),
      'variant_2' => array(
        'custom_settings' => TRUE,
      ),
      'variant_3' => array(
        'custom_settings' => TRUE,
      ),
      'variant_4' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'revision' => array(
          'weight' => '10',
        ),
        'view_mode' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_bean__general_structure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_search_disabled_node';
  $strongarm->value = FALSE;
  $export['page_manager_search_disabled_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'file_entity' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '100';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'node';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'not-found';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_appearance';
  $strongarm->value = array(
    'orientation' => 'h',
    'show_name' => 0,
  );
  $export['social_media_links_appearance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_icon_style';
  $strongarm->value = 'elegantthemes:32';
  $export['social_media_links_icon_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_link_attributes';
  $strongarm->value = array(
    'target' => '<none>',
    'rel' => '<none>',
  );
  $export['social_media_links_link_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_platforms';
  $strongarm->value = array(
    'facebook' => array(
      'platform_value' => 'EducationistheAnswer',
      'weight' => '-9',
    ),
    'twitter' => array(
      'platform_value' => 'PAUEducation',
      'weight' => '-8',
    ),
    'googleplus' => array(
      'platform_value' => '116294359605553136106/posts',
      'weight' => '-7',
    ),
    'linkedin' => array(
      'platform_value' => 'company/pau-education',
      'weight' => '-6',
    ),
    'pinterest' => array(
      'platform_value' => '',
      'weight' => '-5',
    ),
    'vimeo' => array(
      'platform_value' => '',
      'weight' => '-4',
    ),
    'youtube' => array(
      'platform_value' => '',
      'weight' => '-3',
    ),
    'youtube_channel' => array(
      'platform_value' => '',
      'weight' => '-2',
    ),
    'rss' => array(
      'platform_value' => '/rss',
      'weight' => '-1',
    ),
    'contact' => array(
      'platform_value' => '',
      'weight' => '0',
    ),
    'email' => array(
      'platform_value' => '',
      'weight' => '1',
    ),
  );
  $export['social_media_links_platforms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_amw_1';
  $strongarm->value = 0;
  $export['superfish_amw_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_arrow_1';
  $strongarm->value = 1;
  $export['superfish_arrow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_bgf_1';
  $strongarm->value = 0;
  $export['superfish_bgf_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_clone_parent_1';
  $strongarm->value = 0;
  $export['superfish_clone_parent_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_delay_1';
  $strongarm->value = '800';
  $export['superfish_delay_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_depth_1';
  $strongarm->value = '-1';
  $export['superfish_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dfirstlast_1';
  $strongarm->value = 0;
  $export['superfish_dfirstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dzebra_1';
  $strongarm->value = 0;
  $export['superfish_dzebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_expanded_1';
  $strongarm->value = 0;
  $export['superfish_expanded_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_firstlast_1';
  $strongarm->value = 1;
  $export['superfish_firstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hhldescription_1';
  $strongarm->value = 0;
  $export['superfish_hhldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hid_1';
  $strongarm->value = 1;
  $export['superfish_hid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hlclass_1';
  $strongarm->value = '';
  $export['superfish_hlclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldescription_1';
  $strongarm->value = 0;
  $export['superfish_hldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldexclude_1';
  $strongarm->value = '';
  $export['superfish_hldexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldmenus_1';
  $strongarm->value = '';
  $export['superfish_hldmenus_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcounter_1';
  $strongarm->value = 1;
  $export['superfish_itemcounter_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcount_1';
  $strongarm->value = 1;
  $export['superfish_itemcount_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemdepth_1';
  $strongarm->value = 1;
  $export['superfish_itemdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_liclass_1';
  $strongarm->value = '';
  $export['superfish_liclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_maxwidth_1';
  $strongarm->value = '27';
  $export['superfish_maxwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcdepth_1';
  $strongarm->value = '1';
  $export['superfish_mcdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcexclude_1';
  $strongarm->value = '';
  $export['superfish_mcexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mclevels_1';
  $strongarm->value = '1';
  $export['superfish_mclevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_minwidth_1';
  $strongarm->value = '12';
  $export['superfish_minwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_multicolumn_1';
  $strongarm->value = 0;
  $export['superfish_multicolumn_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_name_1';
  $strongarm->value = 'Superfish 1';
  $export['superfish_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathclass_1';
  $strongarm->value = 'active-trail';
  $export['superfish_pathclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathcss_1';
  $strongarm->value = '';
  $export['superfish_pathcss_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathlevels_1';
  $strongarm->value = '1';
  $export['superfish_pathlevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 1;
  $export['superfish_shadow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slide_1';
  $strongarm->value = 'vertical';
  $export['superfish_slide_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallabt_1';
  $strongarm->value = '1';
  $export['superfish_smallabt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallact_1';
  $strongarm->value = '1';
  $export['superfish_smallact_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallamt_1';
  $strongarm->value = '';
  $export['superfish_smallamt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallasa_1';
  $strongarm->value = 0;
  $export['superfish_smallasa_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallbpu_1';
  $strongarm->value = 'px';
  $export['superfish_smallbpu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallbp_1';
  $strongarm->value = '768';
  $export['superfish_smallbp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallchc_1';
  $strongarm->value = 0;
  $export['superfish_smallchc_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallcmc_1';
  $strongarm->value = 0;
  $export['superfish_smallcmc_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallech_1';
  $strongarm->value = '';
  $export['superfish_smallech_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallecm_1';
  $strongarm->value = '';
  $export['superfish_smallecm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallich_1';
  $strongarm->value = '';
  $export['superfish_smallich_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallicm_1';
  $strongarm->value = '';
  $export['superfish_smallicm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallset_1';
  $strongarm->value = '';
  $export['superfish_smallset_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallual_1';
  $strongarm->value = '';
  $export['superfish_smallual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smalluam_1';
  $strongarm->value = '0';
  $export['superfish_smalluam_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallua_1';
  $strongarm->value = '0';
  $export['superfish_smallua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_small_1';
  $strongarm->value = '2';
  $export['superfish_small_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_speed_1';
  $strongarm->value = 'fast';
  $export['superfish_speed_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_spp_1';
  $strongarm->value = 1;
  $export['superfish_spp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'none';
  $export['superfish_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_1';
  $strongarm->value = 1;
  $export['superfish_supersubs_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbh_1';
  $strongarm->value = '2';
  $export['superfish_touchbh_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbpu_1';
  $strongarm->value = 'px';
  $export['superfish_touchbpu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbp_1';
  $strongarm->value = '768';
  $export['superfish_touchbp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchdh_1';
  $strongarm->value = 0;
  $export['superfish_touchdh_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchual_1';
  $strongarm->value = '';
  $export['superfish_touchual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchuam_1';
  $strongarm->value = '0';
  $export['superfish_touchuam_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchua_1';
  $strongarm->value = '0';
  $export['superfish_touchua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touch_1';
  $strongarm->value = '0';
  $export['superfish_touch_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_type_1';
  $strongarm->value = 'horizontal';
  $export['superfish_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_ulclass_1';
  $strongarm->value = '';
  $export['superfish_ulclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_use_item_theme_1';
  $strongarm->value = 1;
  $export['superfish_use_item_theme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_use_link_theme_1';
  $strongarm->value = 1;
  $export['superfish_use_link_theme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphlt_1';
  $strongarm->value = '';
  $export['superfish_wraphlt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphl_1';
  $strongarm->value = '';
  $export['superfish_wraphl_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapmul_1';
  $strongarm->value = '';
  $export['superfish_wrapmul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapul_1';
  $strongarm->value = '';
  $export['superfish_wrapul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_zebra_1';
  $strongarm->value = 1;
  $export['superfish_zebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_pau_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'profiles/pauer/modules/custom/stuff/img/favicon.ico',
    'favicon_upload' => '',
    'general__active_tab' => 'edit-favicon',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_anchors_fix' => 1,
    'bootstrap_anchors_smooth_scrolling' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_descriptions' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_cdn' => '',
    'bootstrap_bootswatch' => '',
    'bootstrap_rebuild_registry' => 0,
    'bootstrap_toggle_jquery_error' => 0,
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
  );
  $export['theme_pau_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 2;
  $export['user_register'] = $strongarm;

  return $export;
}
