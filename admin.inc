<?php


/**
* @file admin.inc
*/

function last_post_test_rss(){
   $form = array();
  $form['url_rss'] = array(
      '#type'=>'textfield',
      '#title'=>'URL d\'un flux RSS de test',
      '#default_value' => variable_get('url_rss',''),
      '#description' => 'Indiquer une url qui sera utiliser pour tester le parsing sous Drupal'
      );
  $form['link'] = array(
      '#theme' =>'link',
      '#path'=> 'admin/config/services/last_post/content/rss',
      '#text'=> 'Voir le contenu du flux',
      '#options' => array(
        'attributes' => array(),
        'html' => TRUE,
        ),
      );
  return system_settings_form($form);
  
  
    
}