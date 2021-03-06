/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSSet, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceInfo : XXUnknownSuperclass {
	NSDictionary *_info;	// 4 = 0x4
}
@property(readonly, assign) NSArray *applianceCategoryDescriptors;	// G=0x28f949; 
@property(readonly, assign) BOOL hideIfNoCategories;	// G=0x28f971; 
@property(copy, nonatomic) NSDictionary *info;	// G=0x28f9b9; S=0x28f9cd; @synthesize=_info
@property(readonly, assign) NSString *key;	// G=0x28f819; 
@property(readonly, assign) NSString *localizedStringsFileName;	// G=0x28f8f9; 
@property(readonly, assign) NSString *name;	// G=0x28f841; 
@property(readonly, assign) float preferredOrder;	// G=0x28f869; 
@property(readonly, assign) BOOL primaryAppliance;	// G=0x28f7d9; 
@property(readonly, assign) NSString *principalClassName;	// G=0x28f921; 
@property(readonly, assign) NSSet *requiredRemoteMediaTypes;	// G=0x28f8d1; 
@property(readonly, assign) NSSet *supportedMediaTypes;	// G=0x28f8a9; 
+ (id)infoForApplianceDescription:(id)applianceDescription;	// 0x28f5e5
- (id)_initWithMutableDictionary:(id)mutableDictionary;	// 0x28f4ad
// declared property getter: - (id)applianceCategoryDescriptors;	// 0x28f949
- (void)dealloc;	// 0x28f4f9
- (unsigned)hash;	// 0x28f5bd
// declared property getter: - (BOOL)hideIfNoCategories;	// 0x28f971
// declared property getter: - (id)info;	// 0x28f9b9
- (BOOL)isEqual:(id)equal;	// 0x28f545
// declared property getter: - (id)key;	// 0x28f819
// declared property getter: - (id)localizedStringsFileName;	// 0x28f8f9
// declared property getter: - (id)name;	// 0x28f841
// declared property getter: - (float)preferredOrder;	// 0x28f869
// declared property getter: - (BOOL)primaryAppliance;	// 0x28f7d9
// declared property getter: - (id)principalClassName;	// 0x28f921
// declared property getter: - (id)requiredRemoteMediaTypes;	// 0x28f8d1
// declared property setter: - (void)setInfo:(id)info;	// 0x28f9cd
// declared property getter: - (id)supportedMediaTypes;	// 0x28f8a9
@end

