// COMMON START

#include <windows.h>

int get_length(char* string)
{
    int result = 0;
    while (string[result] != '\0') { result++; }
    return result;
}

HANDLE stdout;

void initialize_printing() { stdout = GetStdHandle(STD_OUTPUT_HANDLE); }

void panic()
{
    char message[] = "panic\n";
    WriteConsole(stdout, message, sizeof(message) - 1, nullptr, nullptr);
    ExitProcess(1);
}

void print(char* message) { WriteConsole(stdout, message, get_length(message), nullptr, nullptr); }

void print(char c) { WriteConsole(stdout, &c, 1, nullptr, nullptr); }

void print(int value)
{
    char buffer[21];
    int count = 0;
    do
    {
        buffer[count] = value % 10 + '0';
        value /= 10;
        count++;
    }
    while (value != 0);
    for (int i = 0; i < count / 2; i++)
    {
        auto temp = buffer[i];
        buffer[i] = buffer[count - i - 1];
        buffer[count - i - 1] = temp;
    }
    WriteConsole(stdout, buffer, count, nullptr, nullptr);
}

// COMMON END

char* SOURCE =
/*
"vJrwpWtwJgWrhcsFMMfFFhFp\n"
"jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL\n"
"PmmdzqPrVvPwwTWBwg\n"
"wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn\n"
"ttgJtRGJQctTZtZT\n"
"CrZsJsPPZsGzwwsLwLmpwMDw\n"
*/
"lDDWVvlVVQfDMlWjGJTRjQCgTGLCLj\n"
"ZLZpwzLBhwZhSLBsjntGCtgJRjbnJgSG\n"
"qppdZzzsdsmZphrNsNwZhllDHLcVVDWFPvFWcWdFlv\n"
"ztdhgJDBJghmQtPFQPpmbw\n"
"lVlLRcnfllcfVcccGnSQVLcsTPFbpwsPFspTSqmbpswpbF\n"
"cCHRGcGcCRGlGrGcVGnrdWHWBDzBNhhQZWWNBhJz\n"
"NfnSSQpdnRSSpvWdSsjZDGNDjGDwTGTjHG\n"
"wlPzPqzPFbMmqPCFCJmbsjbHLDDHDZjDjbGHsT\n"
"gwMlgmtmPcqVVvhVnvcRnn\n"
"cBNBBCHhbhNhblBcCCvcBHSwTwDQSqRwDQpDRsjHST\n"
"dPmzMVWdmmMnnZJtZVdqjTSrjTjrpQrsTTVwQRSj\n"
"qzmZMmdZPtnGqclblGlbGvgBFc\n"
"ZfpmNDfRhzbbqDnD\n"
"SFtFjTTZVTFvVTjHrsVvqGBJqhnSSnbJznLGJwJq\n"
"TjdPPtdMPPWCcZgW\n"
"qsbmGCsjHNhmhmhzTDznpnlQZlbWlZ\n"
"LTSSfSvggVVgBgfLtvvtTSczzpWnZQZnlnzpBcnWpQWc\n"
"FrLvrrrVPgdPftSHHdNsjTHjmGThhm\n"
"wGQlMjvMwpvjvZjZTZlWjplWJJTggDTgfCnntPgTJPbtPgSP\n"
"qNhJmcVmdJqhHnPnDNtnPDCg\n"
"LrrchqhRdLVzRdmhJcFFQWGGMjpGlvZzlQQv\n"
"ZqZMbZMfQZptpjlF\n"
"PJCggvHlwWHvSSvCJNvSPvDBtFDQThFQjtRQhhFTsVThQtsF\n"
"PwWCnBBCClcMMznMdG\n"
"rNwwQJrJrnQswrQrRRwCShBSLndZpdnhpGFSdhBp\n"
"PvzzWVzbclGFhLFGdZll\n"
"VWjPWvbjcVbVcGVzjcgzgwQQRRRrqwRJQwwstCRR\n"
"zjBMMzznjbssrBrMBbvHDmrlprlrpwGpwQDV\n"
"LhRwPPTLLNRZqScPWPWPTSmQvQQDGGdQHVDlmVpQGD\n"
"NtfhNwhLLNwRwRNcTBgnJMCBzsBFjsJfCz\n"
"jZjsWNDlPfClfMlM\n"
"GjqbVSqjhgvgSVSBCPmMmCmfpwTBfh\n"
"nGbjqtqcGzsLDFcJLs\n"
"ZQtmZdtdQcLndRncdQQLFjWWDHNPfhpnqhqsHNNDnpHs\n"
"TrMBGbJTwwlmDPPPWshWHfJq\n"
"wmVzbrwbwvBlBlVGtSVLSdFjdFtdjLVR\n"
"LBhZFhRPbbnPddMdPPlD\n"
"NQszQNczlCSlJSsg\n"
"mwmrVQwpQVWwTlvBpHHHFhZj\n"
"pzzDffWpQBzMpHvzMfRnTNhZdrdBcnLrcdrTLZ\n"
"msgJgtmbgmqJJcdrGcJjGn\n"
"bSVPgwntmVnngQWvWSSMpMMHWH\n"
"gmGMDHHdpngdrGmGcwbNCCnNcbbCSLwL\n"
"zQPPPffQQlVlsPFQFzQchZZbLZNVcbqbNqbZgq\n"
"PRjQzfRgRfjQBTfJQTlPFRHWmmvmWHGWrWvWWtjrdHpD\n"
"vfrHfqrLfLwwNHdvnthpnnFFpstn\n"
"gWcMclgmcRcWgDMWgBgGGFnntqQnGphdQhtbdFnh\n"
"qRWmRDlcDqWBBPwPNrZHrwSHjTfr\n"
"HVVbhdCdndhZSShMzRrzSM\n"
"qBjWqvtWvDJjTjjGJtJtnqBvZMrgSGZlgfSgSRrMQGQRMgMR\n"
"wmwtJsvjtTJwsNnVsHpdnsHdds\n"
"FCJNZDMPNCNvzqQJHqzGqv\n"
"hwjWcSTHwRpSWnQtGgQgGStgQQ\n"
"WpwhRHTRpcLRjwlwwTWBcWdlFbCrsPrrLCMDrZCFsCDPrZPM\n"
"DJjjShSGhGDSNdpfrWWcLFzrDWrDlF\n"
"wtqZgwMBBPVMCBPQggMwqMMzfLlWrWLLzsWcFzTzVTzLss\n"
"tgtwQqZBQQZbBZtPgbHpNJnJShcmJppSHh\n"
"tHrWmrdzzdHflmHmHrSmqswlqhqNgssMhGgghssn\n"
"pJcCBPPQPCcPpRpgwZNZBMnDhMsMBw\n"
"RJCvRRVcQpjLpCJPWrftWvSnrFffWbrz\n"
"jzlwwzDzTlQftzlWjfrBGBgVHBgpgBtPGVtP\n"
"vhsshbMbNhZpgZrrrpHcZr\n"
"qhdMqqSLSSbSJMqqSwwjzFzmjFQQFfHzLQ\n"
"gDhHNnphPPPNCprHFhHFdbdczzjNqbzjVcdbQTcc\n"
"tVJWBtVVZRWtjQbctjqcdj\n"
"RfvlGLvLLLlLMZBmZBRhHDVPnVHPHCgFCnhlpn\n"
"RFhZFTZvFdjlqqlRNCPwSSPCNPBSwC\n"
"spHGswpnWgJLLJCPGg\n"
"cWpDrVVbWfWbVfbsdQqcQzjjzlhdwqll\n"
"WWJPpQwWdQQPNpQvqlvvCblbvbvwLL\n"
"cmRMBMBTbSrTDRMcGBscTGfLZfvfvsCqhLlChZlLhfsC\n"
"TVbzGSMGVVgdpdPJpQ\n"
"lwsFfsZWGsGmsnlGQcPdBBdMbcPHfcCN\n"
"RVvSLtSTrTVrTFPcBdCHRcPHbNNb\n"
"LrqzLFTLrgSJLLLtTgJjVJvWlDDnjDWnWWlhlGWGhZWZhn\n"
"GQJCMGbrMbbCGrrGtcwhctGjNSvWpVVVRjNJqVqqBBRRJq\n"
"ssnglHHsnHzFmHnzHFPVDDSDRgVjvWDNpSSNpB\n"
"PZfHmndFzzfPZPZfCdwchwGcbwwhCdMW\n"
"DRGVQGmGQVnnGVmnnFpNbzCNRbRttCbpLztC\n"
"qdqHBdjTqPlcTchBjJMvvvLtLCcLggLvtmgb\n"
"fqhlHjdwqjjJTwldDmDmrGrrWFrDGZwD\n"
"wFscLVLrrVhwWgZPrcswgZWFTnQdtTMnpQtjdpqdqvqQMt\n"
"JRbHmmbDDSzDmDNpTnBBdpMHQtqtvp\n"
"JmCCbvRGzbbGJsLgZsVhgLwwGW\n"
"WDQwsBzWbBlMjdVpzTJVMj\n"
"fncRngntnPCpJgmdFpFWgm\n"
"RGZPZtZCfvWSvRZGSLvPccHwsrHbwHLrwHHQQsBDbllB\n"
"PlNZhwgpppccgrqVvttbBfrlls\n"
"CznSDDdHDRnRStVsVfDvfrtDZq\n"
"QCddZFSFLTmccQmw\n"
"rnwfVnclGPPFfSPSqBWZvvBBWqZvqWFh\n"
"zLgLQgJssspmQTJmsgjZNmqqzqdHbthDdDDWHbhqBBqb\n"
"QgmmjpNgCCZpjJLpmTrfrSrVRPfnrClfPwnS\n"
"zDzPPwvwqvPPBqjnqvDqBffSfcSNJpNVfccLLNffBR\n"
"MdTMZbgbmmTWGGdmssRCSNsSNVVVcJsNppsC\n"
"MJghbhHhbtMMdWhbJhHgdmWvnFzHDQPDjQDvHHwvQwvzwF\n"
"gGbqqRDrqDMdcBpVlpMG\n"
"WzhPCnWfqMcpBnnNLZ\n"
"fCqPHHJCfJhStwhWHbrrgvjFgbQbSbmbQs\n"
"fhcchnSpfsNpjVVqnqjrGHqq\n"
"zzlFLlPLWdggFqRBjqsrHrBTzz\n"
"FDwgFLZWlbbchpwshsCNcw\n"
"CmPlqqRJDHRDDsFv\n"
"MfSpBQQNNfBfrfVZsmVVdzzrHZmH\n"
"QSBSLSgmQBmwPCtgClhjPP\n"
"NPNsHHHNsPsvHwDqgpwlqt\n"
"rTRWSRrWRzgTzZrRVVLRQzjpbtmmGLlGDDbDwwmtblvDvw\n"
"nRzSRrjSVRrnjrgZfrfzNdPdMPBfBMhJhhBcPhcJ\n"
"LLhzQSDHDHNpNzHHJBQBMvMBqBRJBBqw\n"
"rmbdtmlWCCMnvJrn\n"
"FTVdmVgtjdtbWsvjjmdLSDcgHpDzShzDLPLSHh\n"
"VFFJQVWHtQVHHWbJRRRHwqPvpMLpLZZWLwlwMllL\n"
"jsngsdGssLvlqnZqZw\n"
"hhmfDjDsmDNjjNRNVqNVJRtQHJ\n"
"jvTnffrgFTwvqMzqGdMMSW\n"
"sPbCtCCQQLffZGdWNLWDDzLzGM\n"
"PQPBBtfZCZsmJPPplwwmTwpcTcmcgj\n"
"NBmBRCCsBTRNTndGdswnlwvwnw\n"
"fvbqrbPLqpGwScGGwbbb\n"
"HJDPJFJLJtpJHCvCFBBBBNNWvF\n"
"HJHgNQJBSlRRbJDRDb\n"
"RptsfnshscWMLMZDZp\n"
"njmrnPznnsTRTtPzFzRTswgQwqvVVwBNwwvjqCHqHq\n"
"CBMgBJCTNgQcsQspPpWjRrWrsWsn\n"
"mwLvHLGbdHbGzSHmvmvHzrhjjjPptjWGqZPPZhPRWWGP\n"
"vbbrLFwLFDJFDfFN\n"
"TnPvZSnQgQPHnnnQvgMSWppWNfWRpWfMtthMNDhN\n"
"wLJmLBmGFBFdLBbCBbVCVlsGsWhtHqthRRhqhtHHGqqf\n"
"LmHLbCjjBLVZzZSgzQgjrc\n"
"wdSwfpBhtFbStpftjSVhBwFrGrsQnQgnGrQmqCPmDrmmDb\n"
"zJvzLJLNZNscLzNHHLrGPvGGPrDDqGgDPDgC\n"
"RWsNNRMsHTHLHTlMczLHZLWtpFwfpthSjFtwFhjSVplwtj\n"
"QbrBDLGGRJMQJQJDbQbGvNscWNnTdvnvtnLcccvl\n"
"fqZgpVPZHPmfgPPjBFgcscvNNccdddtdNvdFTs\n"
"CgPpghfjjPgVmfBMMCRJQQJzJBwM\n"
"jLWDqLdWdwLfHwJwzSSfwS\n"
"gCgRRltMrlrCcCMzcBSVfZQfVNZNVSBVNNNh\n"
"gMrcPntccGgzgTMlMPrtDWFvLqqdLnDsmLLFFqvp\n"
"ttHJNccRRwmnsnHnHWMSwqfgvgfwSQZfQf\n"
"ShpLhhzTPBMpQqQgvM\n"
"zhbFjVdrjFjVljrVbdPddSTPHNssHnHlRNCHtRtsctJtGsRJ\n"
"zMVTscVhQhGGhClv\n"
"LfMJmgSBpLRfHmBPgpmJPSBdvQNtlHvrHvNNtNNNClGdGN\n"
"JFJmmSFFbFFbRJPBgFPmSBPMzzWWTDjjTsTqqwjVWbjjVVsZ\n"
"HZpCnwnggfFggbgLDcTb\n"
"SjvWjGzNGGzRjSGmMcLhvhMhFMCcmv\n"
"rjrVJNjVrzVNPrwtPwPCHBPB\n"
"SWwFbTzsSjPzpjFbsWPTWTcWLCLgLgLBZjGVDjCVBBgCBGCZ\n"
"lrJJttQcHqrHrvggHVBgBLffBC\n"
"lnhhcqNRJWzhTdsWFz\n"
"vzldvzlclbFjFvmtjZ\n"
"DDNMNStMsSsGnhSMwQjTQVgVbwMbVTTQ\n"
"DsDSCNNGpLtsNLpnNsqLppDzCBcdJHBzllcJfzJBPBdBlR\n"
"qWNfDvffbJBFDpNfmpbwhGhwjLgTrGwhbGGwrj\n"
"ZctMVCcVVQtTpthlnLtppw\n"
"QMcRSPMZcpCZqDFNRFHNJFFF\n"
"RmztpGSssNMzJRpCvqsCrqdHCBlBdw\n"
"gffPFDcqVbgqWgjlPlwCCrdBdllnBH\n"
"cFFZcbcqfQhgbcNJZRSMRtmNJptS\n"
"PZthPBWlPNPSPtmHHggFGgBJJbwg\n"
"qqzDvLLrfDpvvDLzqvnLzqpzbrCRGJRHwFCmHRwGwgwbbRCj\n"
"nnpnMfpMLTVqfmthmsMNSScMhS\n"
"dflvbdvpfffzpnNLNbWqtblqHjmVhVRhHrwrwrswhHnjsmwh\n"
"gSGMdMcJBgMTGPSPDVZhHhHZmDZhrwwjVm\n"
"CPJQGBGGPcSTFcTCScFtLLdWvptWLbNpNzvWQL\n"
"WThqhvvRDJDRhwcrscNDNFgDHNct\n"
"fnrZVnfVjrSGGLzZbnLzZLjVHstHHHQtgQbPpPcpHsscsFpN\n"
"SVjZSzZdndVCdSSZmTRvMWBRWvvWlrvmhJ\n"
"BcllhPPmMMBPcbRwgQtgHHgtmwgzmt\n"
"rpLqbrbTnNvqjLqLNqrNLvHzDtwpDCzFwggttFFHCQFQ\n"
"LrrrNLqjZSTsZZsvjbLjPhcBBlBsBcGPPcPlPVGP\n"
"HHhrggvSHDtCDsfF\n"
"ZMpLblppNZBDBwLzLLpMssCntfWdCFCnfCCtRNtq\n"
"lbmJlzzLMPMmlBzhSJVccSJhTvSTDh\n"
"sdjBBFqHscFnHTzCnRSnzgVTlC\n"
"LpWWtvZfrpbLpZpWftprLCCNMzCZMmmzTNNTmSSVSM\n"
"pLVtrtbGvpbpGLfPddHBscBQJJGcwsQq\n"
"hLcLnVVcfQBLZPVZnThfVVmjqjHNjgvNfdvpNdrrvvfp\n"
"lbRlWFHJtGNGpqmrqrCN\n"
"DzRRDFsbDtFtDJtWRztzJZVBQMhTsLhQZMZHVLcLcP\n"
"WgbdmgMmWDDvcPcpbz\n"
"jffpllHSpHRptRRGRntSVwvLSCCJDzcCcDLvCzPP\n"
"tRFrnlGfZrQpBpgQQsgF\n"
"TpbBZbCCHCGZNHbzGqgFdNlcFSdNlStSqg\n"
"wvWnWwLCPjJPJhMWtWdMfFSMgcdM\n"
"hhmvmJrJLJJJPvvhDjswCRGHHrHzBBHGVRQBzRRQ\n"
"zChCSBbpSsQscDHHQh\n"
"LNJJRgGltJDvfcrfgHfZ\n"
"lJNRGlLnNJtTGVMlFTbwSWqjBbzWWHSW\n"
"NDTJQDVwCTCJhVGDLfbBbBfbGqbfHBfBHb\n"
"lMgMrggMrmmtzMcgWdlmMlbsRjSRBsTRBWsSHSBTHRBj\n"
"cMPlgztzrPMznnMPpgddgdzpwDDNNwhNFCTwNZQFLTVTwV\n"
"ZgshQgzQnnwMtDwBwv\n"
"SFWFlFZRRcmlWmWRBCDwvwwftBtLmfLf\n"
"PjRFdTdWGddrGlPjcsJZpJzTqhzQJzNHhz\n"
"PgHQgddszgdGPWpMjljMcj\n"
"bSqTqnZLnDJSmnmZmtllGsnVtnWjGGWtjl\n"
"fqSLDbRSfBdHsRwsFdHd\n"
"RwHWZpCWhHvwvHCBMBpJMJGPJJnJgc\n"
"lztljTFljRRBBzBnBMnJMS\n"
"QbRljFtQfljbbFqNFrdZVrZfdCCwVwvddH\n"
"sHzztVzLTgnssPggHHsnCtzBmfBMrMccBBmqmrBqBCRqMf\n"
"ZhDQJhFDqjmSMrRF\n"
"dZpwDhNhhZpQJdDQpwnsGttGwLtRRTLRts\n"
"QJNhClVgPTTtPNCJJCtJhlNPZZRVZfvfzZzmvvzvsmZsvmzR\n"
"blBWBpdbLBDqBpszzffRsvdzjvvd\n"
"BLWpqBbqnDHqBbGlnWGBPcPJcHTTPrhtgNtCtgPc\n"
"jWVJqVwgsJcHCVlQVVQNBp\n"
"vGhGhTPtSSNCddSBCH\n"
"ZCCDtbDftZsqrrcnWW\n"
"hJThjThhVzVTZZwnNZRdgmzt\n"
"lrbSSddsrbPQpsvNtgPRmtHmvtnR\n"
"GQrspWdSGbDcsFFLBhCGVBjhjj\n"
"rHdlHdZDlTcflcNfcrCgcTWWpWQFsRWsFjRCsCjWCmhF\n"
"BnqbvQPLGLBPwqGmsVshsSWShGms\n"
"PzzPPQJPMJtJbbznPnDdrHlNldDNltrgtfDg\n"
"SmmMQhPSlmTwPpmnpllMSMPrccFDqFrDFGgqrDcCwfDgwq\n"
"bVdLLNvdQWVbJbQLVGfGDGfDgrFrqgqJgg\n"
"vjjWsbQdBsszhsHlhhPPSHsM\n"
"PqzJqNzsJgsgNqPdLJPPPNVpMMVWGlFWNFGMpWppGF\n"
"ZnZBjttQZcQZRTQDjQwGFlWMlGdGWVrWWlGn\n"
"ZRDBRSZDSdSLsqJHfSbzzL\n"
"rljJqtZlJqlJcvBNJBNQfQ\n"
"TVMWznvPMTFWznwPFFvwFbbBNBgbcNpQdNcBFQpb\n"
"mDnLWsPLvLMnnnmTzLzVCtlRRtjSljCZhDlhtqSq\n"
"fgWMHClGMWfgRWWWGCfmfgCSVQNTDFHTtddVQQDZNLDZtVVL\n"
"wSqbsvzpwpbpdFTNLQwLNTFN\n"
"zscjPnPqsJlmPJCJSC\n"
"GZSwQjGwGrCGwrTjdCTwdTBpqqlmNmVpNrNvplJqNNpl\n"
"zMfJnDcbRRDRFbzDFRLFBtqNmqqtNBmNBvNm\n"
"sHcJRRHzzfQTjjCjQjCH\n"
"wJCVVbJgCLCwGsMbbGTlsRWHsztZPZWtPrPrWrHzrz\n"
"DBqdvfqDBqFpWZFrtppZJp\n"
"djqNfQcjDQjMgbbwLjlJGn\n"
"TSwfZMfpQwcCCCCrbbCZ\n"
"PLJmGJnjqjrsCjMMVj\n"
"LnNNLLLnFFWmLFMGNMDgfRpDQSfwSfgQzBHwTS\n"
"CdjNCMmdCrVmCjJdVjFNMtMzhWwpGbpBhPZZZDbGPpDhpr\n"
"QSfHzlvgTQffSSHHclgfHnqPbPPPppBhpWDhwWvPhvbwwh\n"
"cQfQRgQnQsnsQSgHRQJsCFMsCjLzJJFjCdNC\n"
"ltLlJttmQdfVRhNmhB\n"
"gWWDrPSvCSWgMMMZBVBdTQPQZNZVPR\n"
"vCbwQzcQrCrLFHwJpHHGpp\n"
"VbRVvVHRbJVTzVLBVPtt\n"
"cSdgSZSZZFhnFcFwdDQcZZhgzpTlzLDzlWTvBWLztBtpLplT\n"
"hZZvdrcSZQZSSwncdHCqHmGHqJrCJqbNbq\n"
"lwWmsQlDbCZbVWZq\n"
"rRShhhhPjTsjTRvHhqfzqfqvBZZvBCZffC\n"
"scPThhRSjQmmNpplcg\n"
"FChtDTThDqZtjppjvgNvjl\n"
"LBwsVdVHLVvvpVGjjgjS\n"
"BbHLBfRcsHcBdMbdWJQPWFCQCZZhWrJPQp\n"
"zMtWCstzNrQLpbplFwQwhb\n"
"gDTDHGvvHVfVdGZVJGDGdnmbwmWFwfhpbnfjwwjpLl\n"
"GJcHVJdvZJVGZWHSSvTZMCzrzzRNSBtBNPBMqNBB\n"
"pLzZVVGGZmZVlmDsQglgsllc\n"
"WSvrjRjrMMFFnFjnrnrdjBRRgdsblQQPbpggsclNDDbPstDs\n"
"SMWRBrrrvSRBSSvWWWBTMTCqpZzLCCTCwJZwwzGZzqHL\n"
"TvfGwGZpPnSNgSSnGh\n"
"srLVHLcjsjVtHqjjrjFjcCqPBggqNQQnMqhgngnznNNB\n"
"VtdmPHLmtVHFLdmZWRJlWpWWWlmWfp\n"
"SbSbdTsrVrdhfSdDGJWGmNwWWPwTGP\n"
"BqlRpBMmllpmnpvvDJPZWPJwZcJgDD\n"
"FFRMCnRFtCMRlMplqMBRBppVbtzdrdhssrmHzVVSsVhVHz\n"
"dNrhhLsrshSmmRcPhm\n"
"WMCngCzCvzvMMpplQvzWlRBPcVStSmTSQbbVSPQmwm\n"
"MpzvWnllglJfqfMgsNdZHqNjdDsPHqqZ\n"
"rNvGZRsRcRRBtBCttB\n"
"DwPPQWnWWnPQnJlPhmTtBFBmqzhpmnFh\n"
"QwQQQlbPPMWwDdDwlVDJJPPdvdSjrjdrsgssLLsZLNBrNNNr\n"
"VjMMVzngnjQQfJDchZqGNqFPcg\n"
"SWBwTtWSFTHwFClHHmwBPcJJDhNGPJNPPhPPGhJt\n"
"CBvSBBBWHdmRTvRWRQFLQRnjnfLLzVbs\n"
"flSpvLlmZpCpZmVSBtlvHHjFHTdssZdjHFdTWdNh\n"
"RmQMQJRQJQmPgrzJrPcRQRJcWdNTGTGGFhGTdFhHThHGMTsF\n"
"RzJrqqcqPRqqJDDqttCpmtlwBpDflSLt\n"
"hBjPZbPBbWvTRnLRWntD\n"
"MNGQNsQwfzsdGfgTGfzQwwffmnCRDVmJLRLCvnvLDvJCDgRL\n"
"wTTdFldNHzTMljjFqphrBqhrZb\n"
"wDcMCbZbzPDcZDWQdrJLrQrZBLRBQr\n"
"FFSHStjtHgllgFdSNmlfFStBqRRssRsRJrLrjrrJBRVhLJ\n"
"fGggtfHtgWMwbCGdCT\n"
"RQrQDDbVGrRSfbVbGtmGtwHFWsCCzsJSJJHsJPJvWC\n"
"hphQnhZQNjlBBcMMpCsHwFjvvHWHWsFvjC\n"
"ppcnnBZqllTQfmrffbtGTDGt\n"
"dsDFsBZBhCFhshFrpBFnmLQmHmRgRbLqmmmRQDLm\n"
"PPBBNNNtGTwJNfTJffNttfLQgqLgHvHbqRwlgmblRvll\n"
"NSNTGTJTWPjGWMPSJJzrBSpzdFSddCFdncrs\n"
"bPzRlMPTzTMldJMnhswcjzfQVccQhc\n"
"HCCqNmNmQQmQssJn\n"
"pHptprtgRStTtMJt\n"
"nTmhrsPMsTfmHHGcSgtj\n"
"bJJwdlrJQLlvwlQDDwSbgffGVNjfgjNtVbcf\n"
"QlpDQFJdvdFqJdFpLvDFpLLnzZMnBMRRzMTqnrzqTRPznz\n"
"qRVRqBzgwqRpqRgVqQRPpQJJPrPhPGJnsGrCFdFJrZdG\n"
"ZvWDmMvmSvCndssrsJ\n"
"WcZcNWlcMjBQpzNTqVBp\n"
"DpLPZLDDlcgmDmhVgfgfWWRwhwwt\n"
"VrVMdbCrrBTjCMQQtMwQNSqMQW\n"
"VCBHdJHdvrrFsbsdrBJTdTzZcpmZGDGPlmzmlccFDZDn\n"
;

int item_to_score(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 1;
    }
    if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 27;
    }
    panic();
}

int main()
{
    initialize_printing();

    {
        int result = 0;
        int line_start = 0;
        for (int i = 0; i < get_length(SOURCE); i++)
        {
            if (SOURCE[i] == '\n')
            {
                int line_length = i - line_start;
                for (int j = line_start; j < line_start + line_length / 2; j++)
                {
                    for (int k = line_start + line_length / 2; k < i; k++)
                    {
                        if (SOURCE[j] == SOURCE[k])
                        {
                            result += item_to_score(SOURCE[j]);
                            goto line_done;
                        }
                    }
                }
                line_done:
                line_start = i + 1;
            }
        }
        print("Answer to part 1: ");
        print(result);
        print("\n");
    }

    {
        int result = 0;
        int line_start[3] = {0, 0, 0};
        int line_end[3];
        int newline_count = 0;
        for (int i = 0; i < get_length(SOURCE); i++)
        {
            if (SOURCE[i] == '\n')
            {
                line_end[newline_count] = i;
                line_start[newline_count + 1] = i + 1;
                newline_count++;
                if (newline_count != 3)
                {
                    continue;
                }

                for (int l1 = line_start[0]; l1 < line_end[0]; l1++)
                {
                    for (int l2 = line_start[1]; l2 < line_end[1]; l2++)
                    {
                        for (int l3 = line_start[2]; l3 < line_end[2]; l3++)
                        {
                            if (SOURCE[l1] == SOURCE[l2] && SOURCE[l2] == SOURCE[l3])
                            {
                                result += item_to_score(SOURCE[l1]);
                                goto group_done;
                            }
                        }
                    }
                }
                group_done:
                newline_count = 0;
                line_start[0] = i + 1;
            }
        }
        print("Answer to part 2: ");
        print(result);
        print("\n");
    }
}
