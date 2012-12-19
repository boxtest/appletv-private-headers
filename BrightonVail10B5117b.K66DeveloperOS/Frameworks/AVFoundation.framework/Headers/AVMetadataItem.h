/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAsynchronousKeyValueLoading.h"
#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSLocale, NSDate, NSDictionary, NSData, NSNumber, AVMetadataItemInternal, NSString;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign) NSString *commonKey;	// G=0x30244b01; 
@property(readonly, assign) NSData *dataValue;	// G=0x30243261; 
@property(readonly, assign) NSDate *dateValue;	// G=0x30243189; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x30244c51; 
@property(readonly, assign) NSDictionary *extraAttributes;	// G=0x30244d29; 
@property(readonly, assign) id<NSCopying, NSObject> key;	// G=0x30244ac1; 
@property(readonly, assign) NSString *keySpace;	// G=0x30244b41; 
@property(readonly, assign) NSLocale *locale;	// G=0x30244b81; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x30243051; 
@property(readonly, assign) NSString *stringValue;	// G=0x30242f91; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x30244bc1; 
@property(readonly, assign) id<NSCopying, NSObject> value;	// G=0x30244cc9; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x302447a9
+ (id)metadataItemsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x302433cd
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x302436dd
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x302432e1
+ (id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;	// 0x30243979
- (id)init;	// 0x30243a2d
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x30242c69
- (id)_figMetadataDictionary;	// 0x302444d9
- (id)_figMetadataFormat;	// 0x302446b5
- (id)_figMetadataProperties;	// 0x302445a9
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x30243b79
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x30243b1d
- (id)_keyAsString;	// 0x30242e8d
- (void)_makePropertiesReady;	// 0x30242b55
- (void)_makeValueReady;	// 0x30242ab5
- (void)_updateCommonKey;	// 0x30242c0d
- (void)cancelLoading;	// 0x30244d79
// declared property getter: - (id)commonKey;	// 0x30244b01
- (id)copyWithZone:(NSZone *)zone;	// 0x30243ce9
// declared property getter: - (id)dataValue;	// 0x30243261
// declared property getter: - (id)dateValue;	// 0x30243189
- (void)dealloc;	// 0x30243bad
- (id)description;	// 0x30243ed1
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30244c51
// declared property getter: - (id)extraAttributes;	// 0x30244d29
- (void)finalize;	// 0x30243c8d
- (unsigned)hash;	// 0x3024435d
- (CGImageRef)imageValue;	// 0x302432dd
- (BOOL)isEqual:(id)equal;	// 0x302440ad
// declared property getter: - (id)key;	// 0x30244ac1
// declared property getter: - (id)keySpace;	// 0x30244b41
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30244d6d
// declared property getter: - (id)locale;	// 0x30244b81
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30243d11
// declared property getter: - (id)numberValue;	// 0x30243051
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30244d69
// declared property getter: - (id)stringValue;	// 0x30242f91
// declared property getter: - (XXStruct_pwHToB)time;	// 0x30244bc1
// declared property getter: - (id)value;	// 0x30244cc9
@end
