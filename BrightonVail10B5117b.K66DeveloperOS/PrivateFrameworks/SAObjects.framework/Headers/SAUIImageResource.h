/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) double pointHeight;	// G=0x355da159; S=0x355da1d9; 
@property(assign, nonatomic) double pointWidth;	// G=0x355da221; S=0x355da2a1; 
@property(copy, nonatomic) NSURL *resourceUrl;	// G=0x355da2e5; S=0x355da361; 
@property(assign, nonatomic) double scaleFactor;	// G=0x355da3c1; S=0x355da441; 
+ (id)imageResource;	// 0x355da0c5
+ (id)imageResourceWithDictionary:(id)dictionary context:(id)context;	// 0x355da109
- (id)encodedClassName;	// 0x355da0b9
- (id)groupIdentifier;	// 0x355da0a9
// declared property getter: - (double)pointHeight;	// 0x355da159
// declared property getter: - (double)pointWidth;	// 0x355da221
// declared property getter: - (id)resourceUrl;	// 0x355da2e5
// declared property getter: - (double)scaleFactor;	// 0x355da3c1
// declared property setter: - (void)setPointHeight:(double)height;	// 0x355da1d9
// declared property setter: - (void)setPointWidth:(double)width;	// 0x355da2a1
// declared property setter: - (void)setResourceUrl:(id)url;	// 0x355da361
// declared property setter: - (void)setScaleFactor:(double)factor;	// 0x355da441
@end
