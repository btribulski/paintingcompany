<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?>">
  <div class="cssbox">
    <div class="cssbox_head">
      <?php if ($block->subject): ?>
      <h2 class="title"><?php print $block->subject; ?></h2>
      <?php else: ?>
      <h2>&nbsp;</h2>
      <?php endif; ?>
    </div>
    <div class="cssbox_body">
      <div class="content"><?php print $block->content; ?></div>
    </div>
  </div>
</div>
<!-- /#block-<?php print $block->module .'-'. $block->delta; ?> -->
