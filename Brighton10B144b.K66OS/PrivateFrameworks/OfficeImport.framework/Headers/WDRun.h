/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

@interface WDRun : NSObject {
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x34ab47fd
- (id)initWithParagraph:(id)paragraph;	// 0x348e8679
- (void)clearProperties;	// 0x34ab4819
- (void)dealloc;	// 0x348f1641
- (BOOL)isEmpty;	// 0x34ab4815
- (id)paragraph;	// 0x348ecd91
- (int)runType;	// 0x34ab47f9
@end

