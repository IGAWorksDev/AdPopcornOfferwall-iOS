Pod::Spec.new do |s|
s.name         = "AdPopcornOfferwall"
s.version      = "4.3.3"
s.summary      = "AdPopcornOfferwall.framework"
s.homepage     = "https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS"

s.license      = {
:type => 'Commercial',
:text => <<-LICENSE
All text and design is copyright 2006-2021 igaworks, Inc.

All rights reserved.

https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS
LICENSE
}

s.platform = :ios, '9.0'
s.author       = { "mick" => "mick@igaworks.com" }
s.source       = { :git => "https://github.com/IGAWorksDev/AdPopcornOfferwall-iOS.git", :tag => "#{s.version}" }
s.resources = "AdPopcornOfferwall.bundle"
s.ios.vendored_frameworks = 'AdPopcornOfferwall.framework'
s.frameworks = 'ImageIO', 'MessageUI', 'SafariServices', 'MediaPlayer', 'AdSupport', 'AVKit', 'AVFoundation', 'CoreMedia', 'WebKit', 'MessageUI', 'Security', 'CoreTelephony', 'SystemConfiguration', 'QuartzCore', 'UIKit', 'AppTrackingTransparency'
s.libraries = 'xml2'
s.xcconfig     = { 'HEADER_SEARCH_PATHS' => '"$(SDKROOT)/usr/include/libxml2"' }
s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
}
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
