/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WBTableCell : NSObject {
}
+ (void)readFrom:(id)from textRun:(WrdTextRun *)run with:(WrdTableProperties *)with tracked:(WrdTableProperties *)tracked row:(id)row index:(int)index cell:(id)cell;	// 0x31cd12f5
+ (void)setParagraphProperties:(id)properties paragraphProperties:(WrdParagraphProperties *)properties2 for:(id)aFor;	// 0x31e1225d
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x31e11fad
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x31e11db1
+ (void)writeText:(id)text to:(id)to;	// 0x31e11bf9
@end

