/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSValidationErrorLocalizationPolicy.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
@private
	NSSet *_mergedPolicies;	// 24 = 0x18
}
- (id)init;	// 0x32de5781
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x32de5a39
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x32de58d1
- (void)addPolicy:(id)policy;	// 0x32de5861
- (id)copyWithZone:(NSZone *)zone;	// 0x32de580d
- (void)dealloc;	// 0x32de57c1
@end

