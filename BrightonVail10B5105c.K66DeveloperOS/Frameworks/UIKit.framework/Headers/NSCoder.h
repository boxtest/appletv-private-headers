/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library


@interface NSCoder (UIGeometryKeyedCoding)
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x34714bd5
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x346086ad
- (CGRect)decodeCGRectForKey:(id)key;	// 0x34714b8d
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x34714b4d
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x347076b5
- (UIOffset)decodeUIOffsetForKey:(id)key;	// 0x34714c31
- (void)encodeCGAffineTransform:(CGAffineTransform)transform forKey:(id)key;	// 0x34714ab1
- (void)encodeCGPoint:(CGPoint)point forKey:(id)key;	// 0x34608625
- (void)encodeCGRect:(CGRect)rect forKey:(id)key;	// 0x34714a7d
- (void)encodeCGSize:(CGSize)size forKey:(id)key;	// 0x34714a55
- (void)encodeUIEdgeInsets:(UIEdgeInsets)insets forKey:(id)key;	// 0x34714af1
- (void)encodeUIOffset:(UIOffset)offset forKey:(id)key;	// 0x34714b25
@end

@interface NSCoder (UITypeSafety)
- (id)_copyDecodedObjectForKey:(id)key ofClass:(Class)aClass;	// 0x348885ed
@end

