/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface ODIText : NSObject {
}
+ (void)addTextFromPoint:(id)point level:(unsigned)level includeChildren:(BOOL)children toShape:(id)shape baseListStyle:(id)style state:(id)state;	// 0x34af00a1
+ (id)baseListStyleForPoint:(id)point shape:(id)shape isCentered:(BOOL)centered state:(id)state;	// 0x34aefe21
+ (void)mapTextFromPoint:(id)point toShape:(id)shape isCentered:(BOOL)centered includeChildren:(BOOL)children state:(id)state;	// 0x34aefca5
+ (void)mapTextFromPoint:(id)point toShape:(id)shape isCenteredHorizontally:(BOOL)horizontally isCenteredVertically:(BOOL)vertically includeChildren:(BOOL)children state:(id)state;	// 0x34aefcdd
@end
