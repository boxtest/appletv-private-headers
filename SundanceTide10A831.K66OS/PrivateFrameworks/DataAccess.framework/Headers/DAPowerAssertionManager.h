/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"

@class NSMutableDictionary, NSMutableSet, NSCountedSet;

@interface DAPowerAssertionManager : NSObject {
	NSCountedSet *_contexts;	// 4 = 0x4
	NSMutableDictionary *_groupIdentifierToContexts;	// 8 = 0x8
	CFDictionaryRef _contextToGroupIdentifier;	// 12 = 0xc
	NSMutableSet *_heldAsideGroupIdentifiers;	// 16 = 0x10
	NSCountedSet *_heldAsideContexts;	// 20 = 0x14
	CFDictionaryRef _contextToPowerAssertionRef;	// 24 = 0x18
}
+ (id)sharedPowerAssertionManager;	// 0x32184491
+ (void)vendDaemons:(Class)daemons;	// 0x32184481
- (id)init;	// 0x32184281
- (void)_releaseAssertionForContext:(id)context;	// 0x32185789
- (void)_retainAssertionForContext:(id)context;	// 0x32185659
- (void)dealloc;	// 0x321843c5
- (void)dropPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x32184f65
- (unsigned)powerAssertionRetainCount:(id)count;	// 0x321845a5
- (void)reattainPowerAssertionsForGroupIdentifier:(id)groupIdentifier;	// 0x321852dd
- (void)releasePowerAssertion:(id)assertion;	// 0x32184b09
- (void)retainPowerAssertion:(id)assertion withGroupIdentifier:(id)groupIdentifier;	// 0x32184721
- (id)stateString;	// 0x32184e55
@end
