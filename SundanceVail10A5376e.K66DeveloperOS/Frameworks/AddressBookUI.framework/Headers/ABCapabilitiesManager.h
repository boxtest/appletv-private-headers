/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library


@interface ABCapabilitiesManager : NSObject {
	BOOL _isListeningToFTCServiceAvailability;	// 4 = 0x4
}
+ (void)_setDefaultCapabilitiesManager:(id)manager;	// 0x30ffb9fd
+ (id)defaultCapabilitiesManager;	// 0x30f97bf9
- (void)_startListeningToFTCServiceAvailabilityIfNecessary;	// 0x30f9ee91
- (void)addFTCServiceAvailabilityListener:(id)listener selector:(SEL)selector;	// 0x30ffbbd9
- (id)conferenceURLForDestinationID:(id)destinationID;	// 0x30ffbb95
- (id)conferenceURLForPhoneNumber:(id)phoneNumber;	// 0x30ffbb51
- (void)dealloc;	// 0x30ffba35
- (BOOL)hasAdditionalTextTones;	// 0x30ffbc41
- (BOOL)hasCameraCapability;	// 0x30ffbaf1
- (BOOL)hasCellularDataCapability;	// 0x30ffbae5
- (BOOL)hasCellularTelephonyCapability;	// 0x30fa6d21
- (BOOL)hasPreviouslyConferencedWithID:(id)anId;	// 0x30ffbafd
- (BOOL)hasSMSCapability;	// 0x30f9ed61
- (BOOL)hasTelephonyCapability;	// 0x30f9826d
- (BOOL)hasVibratorCapability;	// 0x30f98279
- (BOOL)isConferencingAvailable;	// 0x30f9f4c9
- (BOOL)isConferencingEverGonnaBeAvailable;	// 0x30f97c41
- (BOOL)isEmailConfigured;	// 0x30f9ed7d
- (BOOL)isMMSConfigured;	// 0x30f9ee2d
- (BOOL)isMadridConfigured;	// 0x30f9ee39
- (BOOL)isSensitiveUIAllowed;	// 0x30ffbac9
- (BOOL)isTwitterServiceAvailable;	// 0x30ffbc5d
- (BOOL)isWeiboServiceAvailable;	// 0x30ffbc8d
- (void)removeFTCServiceAvailabilityListener:(id)listener;	// 0x30fbe175
@end

