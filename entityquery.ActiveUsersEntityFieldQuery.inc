<?php
/**
 * @file
 * ActiveUsersEntityFieldQuery extending EntityFieldQuery class.
 */

class ActiveUsersEntityFieldQuery extends EntityFieldQuery {
  public function __construct() {
    $this
      ->entityCondition('entity_type', 'user')
      ->propertyCondition('status', 1)
      ->propertyOrderBy('created', 'ASC');
  }
}
