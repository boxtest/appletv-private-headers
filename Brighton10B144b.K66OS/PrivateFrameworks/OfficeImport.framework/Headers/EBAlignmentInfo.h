/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBAlignmentInfo : NSObject {
}
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)xl;	// 0x34a07cad
+ (int)convertEDVerticalAlignmentEnumToXl:(int)xl;	// 0x34a07cb9
+ (int)convertXlHorizAlignEnumToED:(int)ed;	// 0x3489902d
+ (int)convertXlVertAlignEnumToED:(int)ed;	// 0x34899071
+ (id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign *)xlDXfAlign;	// 0x34a078d5
+ (id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x348c51e1
+ (id)edAlignmentInfoFromXlXf:(XlXf *)xlXf;	// 0x34898e5d
+ (void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x34a07c49
+ (void)writeAlignmentInfo:(id)info toXlXf:(XlXf *)xlXf;	// 0x34a07999
+ (XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;	// 0x34a07a71
@end

