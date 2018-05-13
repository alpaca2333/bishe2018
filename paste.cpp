int Game::OnTick()
{
    CHECK_RESP_AND_RET(ctx_->resp)
    vector<Session *> sessions;

    for (auto itr = ctx_->resp->rids.begin(); itr != ctx_->resp->rids.end(); ++itr)
    {
        sessions.push_back(Session::GetSession(*itr));
    }

    for (auto itr = sessions.begin(); itr != sessions.end(); ++itr)
    {
        int err;
        Session *session = *itr;
        for (int i = 0; i < session->ActionNum(); ++i)
        {
            
        }
    }
    

}