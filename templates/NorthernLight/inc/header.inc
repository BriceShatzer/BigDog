<div id="header" data-cmsadmin-layout-header="true">    
        <$search buttonText="Search" labelText="Search"/$>    
        
        <h1 id="logo" data-cmsadmin-layout-branding="true"><$logo href="/" maxwidth="550" maxheight="50" alt=""$><a href="/"><$websitename/$></a><$/logo$></h1>    
    </div>    
    
        
    <div id="navigation" data-cmsadmin-layout-nav="true">   
        <div id="cartStatus"><$shoppingcartstatus cssClass="my-shopping-cart"$>
            <$cartfull$><a class="cart-link" href="[cart.url]">View Cart ([cart.item_total] [pluralize(cart.item_total, 'item', 'items')])</a> or <a class="checkout-link" href="[checkout.url]">Checkout</a><$/cartfull$>
            <$cartempty$><$/cartempty$><$/shoppingcartstatus$></div> 
        <$globalmenu cssClass="mainNav" showLevels="1" alwaysShowChildren="true" showHome="true"/$> 
   
</div>