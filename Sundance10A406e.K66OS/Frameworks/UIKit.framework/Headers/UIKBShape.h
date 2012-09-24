/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying> {
	UIKBGeometry *m_geometry;	// 4 = 0x4
	CGRect m_originalFrame;	// 8 = 0x8
	CGRect m_frame;	// 24 = 0x18
	CGRect m_paddedFrame;	// 40 = 0x28
	unsigned m_uid;	// 56 = 0x38
	BOOL m_scaled;	// 60 = 0x3c
}
@property(assign, nonatomic) CGRect frame;	// G=0x309ad16d; S=0x309ae4b5; @synthesize=m_frame
@property(retain, nonatomic) UIKBGeometry *geometry;	// G=0x309ae495; S=0x309ae4a5; @synthesize=m_geometry
@property(readonly, assign, nonatomic) CGRect originalFrame;	// G=0x30b69399; 
@property(assign, nonatomic) CGRect paddedFrame;	// G=0x309ae575; S=0x309ae599; @synthesize=m_paddedFrame
@property(readonly, assign, nonatomic) unsigned uid;	// G=0x30b69bc9; @synthesize=m_uid
+ (id)shape;	// 0x30b68d09
+ (id)shapeByCombining:(id)combining withShape:(id)shape;	// 0x30b69a79
- (id)init;	// 0x309ae3e5
- (id)initWithCoder:(id)coder;	// 0x30b68d51
- (id)initWithGeometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame3;	// 0x309aa9c5
- (CGRect)_scaleRect:(CGRect)rect inYAxis:(BOOL)yaxis;	// 0x30b696d1
- (void)addRectFrom:(id)from;	// 0x309ae5dd
- (void)addRectFrom:(id)from widthFraction:(float)fraction adjustOriginFactor:(float)factor;	// 0x30b695bd
- (id)copyWithZone:(NSZone *)zone;	// 0x309ae2d1
- (void)dealloc;	// 0x309deaed
- (id)description;	// 0x30b694cd
- (void)encodeWithCoder:(id)coder;	// 0x30b68e91
// declared property getter: - (CGRect)frame;	// 0x309ad16d
// declared property getter: - (id)geometry;	// 0x309ae495
- (unsigned)hash;	// 0x30b69209
- (BOOL)isEmpty;	// 0x30b69401
- (BOOL)isEqual:(id)equal;	// 0x30b69225
- (void)makeLikeOther:(id)other;	// 0x30b68fcd
// declared property getter: - (CGRect)originalFrame;	// 0x30b69399
// declared property getter: - (CGRect)paddedFrame;	// 0x309ae575
- (void)scaleIfNeeded:(float)needed onlyYAxis:(BOOL)axis;	// 0x30b69831
- (void)scaleWidth:(float)width;	// 0x30b69689
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x309ae4b5
- (void)setFrame:(CGRect)frame resetOriginalFrame:(BOOL)frame2;	// 0x309ae4e1
- (void)setFrameOnly:(CGRect)only;	// 0x30b6937d
// declared property setter: - (void)setGeometry:(id)geometry;	// 0x309ae4a5
// declared property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x309ae599
// declared property getter: - (unsigned)uid;	// 0x30b69bc9
@end
