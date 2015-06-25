Pod::Spec.new do |s|
s.name         = "AdPopcornOfferwall"
s.version      = "1.0.0"
s.summary      = "AdPopcornOfferwall.framework"
s.homepage     = "https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
All text and design is copyright 2006-2015 igaworks, Inc.

All rights reserved.

https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS
LICENSE
}

s.platform = :ios, '6.0'
s.author       = { "wonje,song" => "wonje@igaworks.com" }
s.source       = { :git => "https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS.git", :tag => "#{s.version}" }
s.resources = "AdPopcornOfferwall.bundle"
s.ios.vendored_frameworks = 'AdPopcornOfferwall.framework'
s.libraries = 'xml2'
s.xcconfig     = { 'HEADER_SEARCH_PATHS' => '"$(SDKROOT)/usr/include/libxml2"' }
end