Pod::Spec.new do |s|
s.name         = "AdPopcornOfferwall"
s.version      = "4.5.0"
s.summary      = "AdPopcornOfferwall.xcframework"
s.homepage     = "https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
All text and design is copyright 2006-2023 Adpopcorn, Inc.

All rights reserved.

https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS
LICENSE
}

s.platform = :ios, '11.0'
s.author       = { "mick" => "mick@igaworks.com" }
s.source       = { :git => "https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS.git", :tag => "#{s.version}" }
s.resources = "AdPopcornOfferwall.bundle"
s.ios.vendored_frameworks = 'AdPopcornOfferwall.xcframework'
s.frameworks = 'ImageIO', 'MessageUI', 'SafariServices', 'MediaPlayer', 'AdSupport', 'AVKit', 'AVFoundation', 'CoreMedia', 'WebKit', 'Security', 'CoreTelephony', 'SystemConfiguration', 'QuartzCore', 'UIKit', 'AppTrackingTransparency'
s.libraries = 'xml2'
s.xcconfig     = { 'HEADER_SEARCH_PATHS' => '"$(SDKROOT)/usr/include/libxml2"' }
end
