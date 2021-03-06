/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABOle : NSObject {
}
+ (BOOL)isBiffCLSID:(id)clsid;	// 0x30d3bc19
+ (BOOL)isChart:(id)chart;	// 0x30d3bbcd
+ (id)read4ByteFromStream:(SsrwOOStream *)stream;	// 0x30dd88c9
+ (id)readAnsiStringFromStream:(SsrwOOStream *)stream;	// 0x30d974a9
+ (id)readCLSIDFromStream:(SsrwOOStream *)stream;	// 0x30d3ba89
+ (id)readCompressedFromStream:(SsrwOOStream *)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;	// 0x30d9724d
+ (id)readFromData:(id)data cancel:(id)cancel;	// 0x30da91b5
+ (id)readFromFileName:(id)fileName cancel:(id)cancel;	// 0x30d3ae7d
+ (id)readFromParentStorage:(SsrwOOStorage *)parentStorage storageName:(id)name cancel:(id)cancel;	// 0x30d38a51
+ (id)readFromStream:(SsrwOOStream *)stream size:(unsigned long)size cancel:(id)cancel;	// 0x30df2719
+ (BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage *)storage;	// 0x30d3b3c9
+ (id)readUnicodeStringFromStream:(SsrwOOStream *)stream;	// 0x30d97619
+ (id)stringForCLSID:(SsrwOO_GUID)clsid;	// 0x30d3bb19
@end

