<?php /* Smarty version 2.6.26, created on 2013-03-12 12:04:43
         compiled from CRM/Contact/Form/Search/Criteria/Basic.tpl */ ?>
<?php require_once(SMARTY_CORE_DIR . 'core.load_plugins.php');
smarty_core_load_plugins(array('plugins' => array(array('block', 'ts', 'CRM/Contact/Form/Search/Criteria/Basic.tpl', 28, false),array('function', 'help', 'CRM/Contact/Form/Search/Criteria/Basic.tpl', 28, false),array('function', 'crmURL', 'CRM/Contact/Form/Search/Criteria/Basic.tpl', 55, false),array('modifier', 'crmReplace', 'CRM/Contact/Form/Search/Criteria/Basic.tpl', 29, false),)), $this); ?>
	<table class="form-layout">
		<tr>
            <td><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Complete OR Partial Name<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label>&nbsp;<?php echo smarty_function_help(array('id' => 'id-advanced-intro'), $this);?>
<br />
                <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['sort_name']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'big') : smarty_modifier_crmReplace($_tmp, 'class', 'big')); ?>

            </td>
            <td>
                <label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Complete OR Partial Email<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label><br />
                <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['email']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'medium') : smarty_modifier_crmReplace($_tmp, 'class', 'medium')); ?>

            </td>
            <td>
                <?php echo $this->_tpl_vars['form']['uf_group_id']['label']; ?>
 <?php echo smarty_function_help(array('id' => "id-search-views"), $this);?>
<br /><?php echo $this->_tpl_vars['form']['uf_group_id']['html']; ?>

            </td>
            <td>
                <?php if ($this->_tpl_vars['form']['component_mode']): ?>  
                    <?php echo $this->_tpl_vars['form']['component_mode']['label']; ?>
 <?php echo smarty_function_help(array('id' => "id-display-results"), $this);?>

                    <br />
                    <?php echo $this->_tpl_vars['form']['component_mode']['html']; ?>

<?php if ($this->_tpl_vars['form']['display_relationship_type']): ?>
            <span id="crm-display_relationship_type"><?php echo $this->_tpl_vars['form']['display_relationship_type']['html']; ?>
</span>
<?php endif; ?>
                <?php else: ?>
                    &nbsp;
                <?php endif; ?>
            </td>
            <td class="labels" rowspan="2">
                <div class="crm-submit-buttons">
                    <?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/formButtons.tpl", 'smarty_include_vars' => array('location' => 'top','buttonStyle' => "width:80px; text-align:center;")));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?>
                </div>
                <div class="crm-submit-buttons reset-advanced-search">
                    <a href="<?php echo CRM_Utils_System::crmURL(array('p' => 'civicrm/contact/search/advanced','q' => 'reset=1'), $this);?>
" id="resetAdvancedSearch" class="button" style="width:70px; text-align:center;"><span><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Reset Form<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></span></a>
                </div>
            </td>       
        </tr>
		<tr>
<?php if ($this->_tpl_vars['form']['contact_type']): ?>
            <td><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Contact Type(s)<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label><br />
                <?php echo $this->_tpl_vars['form']['contact_type']['html']; ?>

                 <?php echo '
					<script type="text/javascript">

								cj("select#contact_type").crmasmSelect({
									addItemTarget: \'bottom\',
									animate: false,
									highlight: true,
									sortable: true,
									respectParents: true
								});

						</script>
					'; ?>

            </td>
<?php else: ?>
            <td>&nbsp;</td>
<?php endif; ?>
<?php if ($this->_tpl_vars['form']['group']): ?>
            <td><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Group(s)<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label>
                <?php echo $this->_tpl_vars['form']['group']['html']; ?>

                <?php echo '
                <script type="text/javascript">
                cj("select#group").crmasmSelect({
                    addItemTarget: \'bottom\',
                    animate: false,
                    highlight: true,
                    sortable: true,
                    respectParents: true
                });

                </script>
                '; ?>

            </td>
<?php else: ?>
            <td>&nbsp;</td>
<?php endif; ?>
            <td><?php echo $this->_tpl_vars['form']['operator']['label']; ?>
 <?php echo smarty_function_help(array('id' => "id-search-operator"), $this);?>
<br /><?php echo $this->_tpl_vars['form']['operator']['html']; ?>
</td>
            <td>
                <?php if ($this->_tpl_vars['form']['deleted_contacts']): ?><?php echo $this->_tpl_vars['form']['deleted_contacts']['html']; ?>
 <?php echo $this->_tpl_vars['form']['deleted_contacts']['label']; ?>
<?php else: ?>&nbsp;<?php endif; ?>
            </td>
    </tr>
    <tr>
<?php if ($this->_tpl_vars['form']['contact_tags']): ?>
            <td><label><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Select Tag(s)<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></label>
                <?php echo $this->_tpl_vars['form']['contact_tags']['html']; ?>

                <?php echo '
                <script type="text/javascript">

                cj("select#contact_tags").crmasmSelect({
                    addItemTarget: \'bottom\',
                    animate: false,
                    highlight: true,
                    sortable: true,
                    respectParents: true
                });


                </script>
                '; ?>
   
            </td>
<?php else: ?>
            <td>&nbsp;</td>
<?php endif; ?>
            <td colspan="4"><?php echo $this->_tpl_vars['form']['tag_search']['label']; ?>
  <?php echo smarty_function_help(array('id' => "id-all-tags"), $this);?>
<br /><?php echo ((is_array($_tmp=$this->_tpl_vars['form']['tag_search']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'huge') : smarty_modifier_crmReplace($_tmp, 'class', 'huge')); ?>
</td>
        </tr>
        <tr>
            <td colspan="5"><?php $_smarty_tpl_vars = $this->_tpl_vars;
$this->_smarty_include(array('smarty_include_tpl_file' => "CRM/common/Tag.tpl", 'smarty_include_vars' => array()));
$this->_tpl_vars = $_smarty_tpl_vars;
unset($_smarty_tpl_vars);
 ?></td>
        </tr>
        <tr>
            <td colspan="2">
                <table class="form-layout-compressed">
                <tr>
                    <td colspan="2">
                        <?php echo $this->_tpl_vars['form']['privacy_toggle']['html']; ?>
 <?php echo smarty_function_help(array('id' => "id-privacy"), $this);?>

                    </td>
                </tr>
                <tr>
                    <td>
                        <?php echo $this->_tpl_vars['form']['privacy_options']['html']; ?>

                    </td>
                    <td>
                        <?php echo $this->_tpl_vars['form']['privacy_operator']['html']; ?>

                    </td>
                </tr>
                </table>
                <?php echo '
                  <script type="text/javascript">
                    cj("select#privacy_options").crmasmSelect({
                     addItemTarget: \'bottom\',
                     animate: false,
                     highlight: true,
                     sortable: true,
                    });
                  </script>
                '; ?>

            </td>
            <td colspan="3">
                <?php echo $this->_tpl_vars['form']['preferred_communication_method']['label']; ?>
<br />
                <?php echo $this->_tpl_vars['form']['preferred_communication_method']['html']; ?>
<br />
                <div class="spacer"></div>
                <?php echo $this->_tpl_vars['form']['email_on_hold']['html']; ?>
 <?php echo $this->_tpl_vars['form']['email_on_hold']['label']; ?>

            </td>
        </tr>
        <tr>
            <td>
                <?php echo $this->_tpl_vars['form']['contact_source']['label']; ?>
<br />
                <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['contact_source']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'medium') : smarty_modifier_crmReplace($_tmp, 'class', 'medium')); ?>

            </td>
            <td>
                <?php if ($this->_tpl_vars['form']['uf_user']): ?>
                    <?php echo $this->_tpl_vars['form']['uf_user']['label']; ?>
 <?php echo $this->_tpl_vars['form']['uf_user']['html']; ?>
 <span class="crm-clear-link">(<a href="#" title="unselect" onclick="unselectRadio('uf_user', 'Advanced'); return false;" ><?php $this->_tag_stack[] = array('ts', array()); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>clear<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?></a>)</span>
                    <div class="description font-italic">
                        <?php $this->_tag_stack[] = array('ts', array('1' => $this->_tpl_vars['config']->userFramework)); $_block_repeat=true;smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], null, $this, $_block_repeat);while ($_block_repeat) { ob_start(); ?>Does the contact have a %1 Account?<?php $_block_content = ob_get_contents(); ob_end_clean(); $_block_repeat=false;echo smarty_block_ts($this->_tag_stack[count($this->_tag_stack)-1][1], $_block_content, $this, $_block_repeat); }  array_pop($this->_tag_stack); ?>
                    </div>
                <?php else: ?>
                    &nbsp;
                <?php endif; ?>
            </td>
            <td>
                <?php echo $this->_tpl_vars['form']['job_title']['label']; ?>
<br />
                <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['job_title']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'medium') : smarty_modifier_crmReplace($_tmp, 'class', 'medium')); ?>

            </td>
            <td colspan="2">
                <?php echo $this->_tpl_vars['form']['preferred_language']['label']; ?>
<br />
                <?php echo ((is_array($_tmp=$this->_tpl_vars['form']['preferred_language']['html'])) ? $this->_run_mod_handler('crmReplace', true, $_tmp, 'class', 'medium') : smarty_modifier_crmReplace($_tmp, 'class', 'medium')); ?>

            </td>             
        </tr>
    </table>