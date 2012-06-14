/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXWorkbook : NSObject {
}
+ (id)edWorkbookFromState:(id)state package:(id)package reader:(id)reader fileName:(id)name temporaryDirectory:(id)directory;	// 0x31285479
+ (id)edWorkbookFromState:(id)state package:(id)package reader:(id)reader resourcesOnly:(bool)only fileName:(id)name temporaryDirectory:(id)directory;	// 0x312854ad
+ (void)readSheetsFrom:(id)from relationNS:(xmlNs *)ns state:(id)state;	// 0x312896b9
+ (void)readStringsFrom:(id)from state:(id)state;	// 0x31288b35
+ (void)readStylesFrom:(id)from state:(id)state;	// 0x31285b5d
+ (void)setupProcessors:(id)processors;	// 0x31285a99
@end
