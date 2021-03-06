/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library


@interface AVFileProcessor : NSObject {
	float _percentComplete;	// 4 = 0x4
}
+ (id)fileProcessor;	// 0x335d8069
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes;	// 0x335d80ad
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes progressBlock:(id)block;	// 0x335d80d5
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info;	// 0x335d80f9
- (id)processPurchasedItem:(id)item withAttributes:(id)attributes resultInfo:(id *)info progressBlock:(id)block;	// 0x335d811d
- (id)rentalInfo:(id)info;	// 0x335d823d
- (id)sinfInfoFromFilePath:(id)filePath;	// 0x335d8395
- (id)sinfsFromFilePath:(id)filePath;	// 0x335d836d
@end

