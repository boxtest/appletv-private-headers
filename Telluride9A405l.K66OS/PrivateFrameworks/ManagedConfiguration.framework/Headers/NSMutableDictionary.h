/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSMutableDictionary.h> // Unknown library


@interface NSMutableDictionary (MCUtilities)
- (void)MCDeepCopyEntriesFromDictionary:(id)dictionary;	// 0x3654e0d9
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)dictionary;	// 0x3654e2bd
- (void)MCSetObjectIfNotNil:(id)aNil forKey:(id)key;	// 0x3654de45
@end

@interface NSMutableDictionary (MCHacks)
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;	// 0x365825b5
@end

