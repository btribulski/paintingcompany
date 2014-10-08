<?php /* Smarty version 2.6.26, created on 2013-03-12 12:04:50
         compiled from CRM/Contact/Form/Search/Criteria/ChangeLog.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Contact/Form/Search/Criteria/ChangeLog.tpl', 34, false),)), $this); ?>
<div id="changelog" class="form-item">
   <table class="form-layout">
     <tr>
        <td>
          <?php echo $this->_tpl_vars['form']['changed_by']['label']; ?>
<br />
          <?php echo $this->_tpl_vars['form']['changed_by']['html']; ?>

        </td>
	<td>
	  <?php echo $this->_tpl_vars['form']['log_date']['html']; ?>
<span class="crm-clear-link">(<a href="#" title="unselect" onclick="unselectRadio('log_date', '<?php echo $this->_tpl_vars['form']['formName']; ?>
'); return false;" ><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>clear<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></a>)</span><br />
        </td>
	<td>
          <br />
	   <?php echo $this->_tpl_vars['form']['log_date_low']['label']; ?>
&nbsp;<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'log_date_low')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>&nbsp;<?php echo $this->_tpl_vars['form']['log_date_high']['label']; ?>
&nbsp;<?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/jcalendar.tpl", 'smarty_include_vars' => array('elementName' => 'log_date_high')));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
        </td>
     </tr>
    </table>
 </div>