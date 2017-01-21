/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "block.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

blockResponse *
block_create_cli_1(blockCreateCli *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_CREATE_CLI,
		(xdrproc_t) xdr_blockCreateCli, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_list_cli_1(blockListCli *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_LIST_CLI,
		(xdrproc_t) xdr_blockListCli, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_info_cli_1(blockInfoCli *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_INFO_CLI,
		(xdrproc_t) xdr_blockInfoCli, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_delete_cli_1(blockDeleteCli *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_DELETE_CLI,
		(xdrproc_t) xdr_blockDeleteCli, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_create_1(blockCreate *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_CREATE,
		(xdrproc_t) xdr_blockCreate, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_delete_1(blockDelete *argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_DELETE,
		(xdrproc_t) xdr_blockDelete, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

blockResponse *
block_exec_1(char **argp, CLIENT *clnt)
{
	static blockResponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, BLOCK_EXEC,
		(xdrproc_t) xdr_wrapstring, (caddr_t) argp,
		(xdrproc_t) xdr_blockResponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
