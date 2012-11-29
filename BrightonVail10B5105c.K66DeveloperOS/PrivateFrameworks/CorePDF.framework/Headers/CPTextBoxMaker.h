/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPBody, CPZone;

@interface CPTextBoxMaker : NSObject {
	CPBody *bodyZone;	// 4 = 0x4
	CPZone *mainZone;	// 8 = 0x8
}
+ (void)boxLayoutsIn:(id)anIn;	// 0x30244039
+ (void)promoteLayoutsIn:(id)anIn;	// 0x30243e99
- (void)boxLayout:(id)layout;	// 0x30243ef9
- (void)boxLayoutsIn:(id)anIn;	// 0x30243fdd
- (BOOL)layoutIsSliced:(id)sliced;	// 0x30243c09
- (void)makeBoxesWith:(id)with parent:(id)parent;	// 0x30243891
- (void)promoteLayoutsIn:(id)anIn;	// 0x30243e3d
- (void)promoteLayoutsInCertainRegions:(id)certainRegions;	// 0x30243cf9
- (void)rotate:(id)rotate;	// 0x30243bb9
- (void)rotateTextBox:(id)box;	// 0x30243a39
@end
