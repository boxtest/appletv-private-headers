/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSSet, NSDictionary, NSString;

@interface BRApplianceInfo : NSObject {
@private
	NSDictionary *_info;	// 4 = 0x4
}
@property(readonly, assign) NSArray *applianceCategoryDescriptors;	// G=0x3664472d; 
@property(readonly, assign) BOOL hideIfNoCategories;	// G=0x36644755; 
@property(copy, nonatomic) NSDictionary *info;	// G=0x3664479d; S=0x366447ad; @synthesize=_info
@property(readonly, assign) NSString *key;	// G=0x366445fd; 
@property(readonly, assign) NSString *localizedStringsFileName;	// G=0x366446dd; 
@property(readonly, assign) NSString *name;	// G=0x36644625; 
@property(readonly, assign) float preferredOrder;	// G=0x3664464d; 
@property(readonly, assign) BOOL primaryAppliance;	// G=0x366445bd; 
@property(readonly, assign) NSString *principalClassName;	// G=0x36644705; 
@property(readonly, assign) NSSet *requiredRemoteMediaTypes;	// G=0x366446b5; 
@property(readonly, assign) NSSet *supportedMediaTypes;	// G=0x3664468d; 
+ (id)infoForApplianceDescription:(id)applianceDescription;	// 0x366443d1
- (id)_initWithMutableDictionary:(id)mutableDictionary;	// 0x36644275
// declared property getter: - (id)applianceCategoryDescriptors;	// 0x3664472d
- (void)dealloc;	// 0x366442c1
- (unsigned)hash;	// 0x36644385
// declared property getter: - (BOOL)hideIfNoCategories;	// 0x36644755
// declared property getter: - (id)info;	// 0x3664479d
- (BOOL)isEqual:(id)equal;	// 0x3664430d
// declared property getter: - (id)key;	// 0x366445fd
// declared property getter: - (id)localizedStringsFileName;	// 0x366446dd
// declared property getter: - (id)name;	// 0x36644625
// declared property getter: - (float)preferredOrder;	// 0x3664464d
// declared property getter: - (BOOL)primaryAppliance;	// 0x366445bd
// declared property getter: - (id)principalClassName;	// 0x36644705
// declared property getter: - (id)requiredRemoteMediaTypes;	// 0x366446b5
// declared property setter: - (void)setInfo:(id)info;	// 0x366447ad
// declared property getter: - (id)supportedMediaTypes;	// 0x3664468d
@end
