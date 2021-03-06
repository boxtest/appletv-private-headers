/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x32e9ef59
+ (id)URLWithTelephoneNumber:(id)telephoneNumber;	// 0x32e9e1ed
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;	// 0x32e9e279
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x32e9e2f1
+ (id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;	// 0x32e9e201
+ (id)mapsURLWithAddress:(id)address;	// 0x32e9ebc9
+ (id)mapsURLWithQuery:(id)query;	// 0x32e9eb29
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x32e9ec69
+ (id)videoCallPromptURLWithURL:(id)url;	// 0x32e9ea25
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x32dc5951
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x32dc5a6d
- (id)_queryParameters;	// 0x32e9e4e1
- (id)appleStoreURL;	// 0x32e9edad
- (id)fmfURL;	// 0x32e9eeb5
- (id)gamecenterURL;	// 0x32e9edb1
- (void)getPhoneNumber:(id *)number addressBookUID:(int *)uid;	// 0x32e9e7fd
- (void)getPhoneNumber:(id *)number addressBookUID:(int *)uid forceAssist:(BOOL *)assist suppressAssist:(BOOL *)assist4 wasAlreadyAssisted:(BOOL *)assisted;	// 0x32e9e87d
- (BOOL)hasTelephonyScheme;	// 0x32e9e9ad
- (BOOL)isGoogleMapsURL;	// 0x32dc58d1
- (BOOL)isJavaScriptURL;	// 0x32e9f521
- (BOOL)isSpringboardHandledURL;	// 0x32e9f105
- (BOOL)isVideoCallURL;	// 0x32e9eac9
- (BOOL)isWebSafeTelephoneURL;	// 0x32e9f15d
- (BOOL)isWebcalURL;	// 0x32e9f441
- (id)itmsURL;	// 0x32e9eda9
- (id)mapsURL;	// 0x32dc5bf5
- (id)phobosURL;	// 0x32dc1781
- (id)phoneNumber;	// 0x32e9e72d
- (id)radarWebURL;	// 0x32dc21b5
- (id)searchResultDomain;	// 0x32e9efbd
- (id)searchResultIdentifier;	// 0x32e9f061
- (id)webSafeTelephoneURL;	// 0x32e9f249
- (id)youTubeURL;	// 0x32dc5f55
@end

@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x32e9f56d
@end

