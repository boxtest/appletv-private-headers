/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject {
@private
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x34e10749
- (id)initWithParagraph:(id)paragraph;	// 0x34cb1c19
- (void)clearProperties;	// 0x34e10745
- (void)dealloc;	// 0x34c20cc1
- (BOOL)isEmpty;	// 0x34e10741
- (id)paragraph;	// 0x34c1b94d
- (int)runType;	// 0x34e1073d
@end
