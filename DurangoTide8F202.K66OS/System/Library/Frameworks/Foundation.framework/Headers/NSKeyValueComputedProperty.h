/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
@private
	NSString *_operationName;	// 12 = 0xc
	NSString *_operationArgumentKeyPath;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_operationArgumentProperty;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x324800d5
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x324800f5
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x32480789
- (Class)_isaForAutonotifying;	// 0x324800b5
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x3248007d
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x3248004d
- (void)dealloc;	// 0x3248019d
- (id)description;	// 0x32480115
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x32480579
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x3248001d
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x3247ffed
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x3247ff6d
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x3247ffad
@end
