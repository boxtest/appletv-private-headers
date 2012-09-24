/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"


@interface VMUDsymExtractor : VMUSymbolExtractor {
}
+ (id)directoryForDsymBundle:(id)dsymBundle;	// 0x36df3f01
+ (id)dsymExtractorWithMachOHeader:(id)machOHeader;	// 0x36df425d
+ (id)dsymPathForHeaderPath:(id)headerPath uuid:(id)uuid searchingDirectories:(id)directories;	// 0x36df4259
+ (id)fullHeaderPathForBaseBinaryDirectory:(id)baseBinaryDirectory oldHeaderPath:(id)path checkUUID:(id)uuid architecture:(id)architecture;	// 0x36df3f61
+ (id)localDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x36df4161
+ (id)spotlightDsymPathForHeaderPath:(id)headerPath uuid:(id)uuid;	// 0x36df4255
- (id)initWithMachOHeader:(id)machOHeader;	// 0x36df4299
@end
