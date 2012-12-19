/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTableRow : NSObject {
}
+ (void)collectCellProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked for:(id)aFor;	// 0x34c6d409
+ (void)readCellsFrom:(id)from textRuns:(id)runs level:(int)level to:(id)to properties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked;	// 0x34b2a18d
+ (void)readFrom:(id)from textRuns:(id)runs to:(id)to index:(int)index row:(id)row;	// 0x34b29c0d
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x34c6d275
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x34c6cda9
+ (void)writeText:(id)text to:(id)to;	// 0x34c6ccb1
@end
